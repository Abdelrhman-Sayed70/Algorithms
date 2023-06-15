# Quick Sort

# Approach

### `Divide`
-  Select element (Pivot)
-  Place it in its correct place (move every element smaller than it to its left and all elements larger than it to its right)

### `Conquer`
- Conquer recursively sort 2 subarrays in the same manner 

### `Combine`
- **Trivial**
- At the end each element will be placed in its correct place

# Code
## `Partition Logic`
```cpp
int partition(vector<int>&v, int start, int end) {
    int pivot = v[start];
    int leftptr = start + 1, rightptr = end;
    while (true) {
        if (leftptr > rightptr) { break; }
        while (leftptr <= rightptr and v[leftptr] <= pivot) { leftptr++; }
        while (leftptr <= rightptr and v[rightptr] > pivot) { rightptr--; }
        if (leftptr <= rightptr) { swap(v[leftptr], v[rightptr]); }
    }   
    int pivotIdx = rightptr;
    swap(v[start], v[rightptr]);
    return pivotIdx;
}
```
## `Quick Sort` 
```cpp
int partition(vector<int>&v, int start, int end) {
    int pivot = v[start];
    int leftptr = start + 1, rightptr = end;
    while (true) {
        if (leftptr > rightptr) { break; }
        while (leftptr <= rightptr and v[leftptr] <= pivot) { leftptr++; }
        while (leftptr <= rightptr and v[rightptr] > pivot) { rightptr--; }
        if (leftptr <= rightptr) { swap(v[leftptr], v[rightptr]); }
    }   
    int pivotIdx = rightptr;
    swap(v[start], v[rightptr]);
    return pivotIdx;
}
void quickSort(vector<int>&v, int start, int end) {
    if (start >= end) { return; } 
    int pivotindex = partition(v, start, end); 
    quickSort(v, start, pivotindex - 1);
    quickSort(v, pivotindex + 1, end);
}
int main() {  
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }  
    quickSort(v, 0, n - 1);
    for (auto& it : v) { cout << it << " "; } 
 }
```

# Complexity 
### `General Case`
- T(n) = T(L) + T(N - L) + O(n)
- Solve using `Recursion Tree` `O(N.Log(N))`

### `Best Case` 
 ![image](https://user-images.githubusercontent.com/99830416/227734160-7d5e2b7a-abeb-4845-84dc-939d5be2bed2.png)
 
• Place the Pivot at the mid of the array so the array will be divided into 2 sub-arrays<br>
• T(n) = 2T(n/2) + O(n). Solve using Master `O(N.Log(N))`<br>

### `Worst Case` 
![image](https://user-images.githubusercontent.com/99830416/227735453-8d0651fc-cb59-496f-aedc-e0a011c46d7f.png)

• Choose Pivot first element so the array will be divided into one element and n-1 elements<br>
• Occure when the array is `sorted` / `reversly sorted`<br>
• T(n) = T(n - 1) + O(n). solve using Tree method `O(N^2)`<br>
• How to avoid `O(n^2)` ? <br>
  - shuffle array element
  - Alwayes choose Pivot at the middle 
  - Random Element

### `Expected Case` 
- T(n) = T(n/10) + T(9.N/10). Solve using Recursion Tree `O(N.Log(N))`

# Advantages
- O(n.Log(n)) 
- **In-Place**. Does not need extra array

# Disadvantages
- Need large RAM


 

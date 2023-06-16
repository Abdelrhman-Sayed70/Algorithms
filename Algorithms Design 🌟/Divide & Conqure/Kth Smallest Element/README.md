# [Kth Smallest Element | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article) 

# Approach 

### `Divide`
**Select a **Pivot** and place it in its proper place (all array element that are smaller than it must be in its left and greter element must be in its right**

### `Conquer`
**Compare the K with the pivot index**

- If K < PivotIdx then recursively saarch in the left part for K index
- Else if K > PivotIdx then recursively saarch in the right part for K - PivotIdx index 
  
  
### `Combine` 
- Trivial. 

# Code
### `Partition` 
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
### `Find Kth smallest element`
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
int SelectKthSmallest(vector<int>&v, int start, int end, int k) {
    if (start == end) { return v[start]; } 
    int q = partition(v, start, end);
    int PivotIndexInCurArr = q - start + 1; 
    if (k == PivotIndexInCurArr) { return v[q]; } 
    else if (k < PivotIndexInCurArr) { return SelectKthSmallest(v, start, q - 1, k); }
    else { return SelectKthSmallest(v, q + 1, end, k- PivotIndexInCurArr); }
}
```

# Splitting and Complexity 
### `General Complexity Form` 
- T(N) = T(L) or T(N - L) + O(N) 

### `Best Splitting` 
- Divide array into 2 equal sub-arrays
- T(N) = T(N/2) + O(n). Solve using Master `O(n)`

### `Worst Splitting` 
- When selecting Pivot and place it in its proper position it will be in the first or last index 
- So each time the array will be divided into n-1 elements 
- T(N) = T(N-1) + O(N). Solve using Master `O(n^2)` 
- *How to a void this case? Refere to Quick Sort algorithm*

### `In between`  
- T(N) = T(N/P) + O(n). Using Master `O(n)`


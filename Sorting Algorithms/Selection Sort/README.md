# Selection Sort
![image](https://github.com/Abdelrhman-Sayed70/Algorithms/assets/99830416/c2afa736-ed5f-46f5-b21d-5f0acaa4971b)

# Algorithm
- From index i search for the min value in the remaining array and swap it with value at index i.

# Code
```cpp
void selectionSort(vector<int>&v) {
    int n = v.size();
    int mn_index;
    for (int i = 0; i < n - 1; i++) {
        mn_index = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[mn_index]) {
                mn_index = j;
            }
        }
        swap(v[i], v[mn_index]);
    }
}
```

# Time Complexity
- Best Case : Θ(n^2) 
- Worst Case : Θ(n^2)
- Average Case : Θ(n^2)

# Advantages 
- Min number of swaps O(n) swaps

# DisAdvantages
- O(n^2) in all Cases

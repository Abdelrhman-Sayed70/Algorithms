# Selection Sort

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

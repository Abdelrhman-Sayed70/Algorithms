# Bubble Sort

# Algorithm
- Check for each 2 consecutive elements and swap them if the first is greater than the second

# Code
```cpp
void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) { swap(v[j], v[j + 1]); }
        }
    }
}
```

# Time Complexity
- Worst Case: Θ(n^2) 
- Best Case: Θ(n^2) 
- Average Case: Θ(n^2) 

# Can we do better ?
`YES`. If no swap occures at one iteration of the outer loop then we can stop the algorithm
- Best Case : Θ(n) Already sorted array 


# Advatages
- O(n) in the best case (sorted array)
- 
# Disadvantages 
- O(n^2) in other cases 
- Max number of swaps 
- 

# Kth Smallest Element 

# Approach 

### `Divide`
- Select a **Pivot** and place it in its proper place (all array element that are smaller than it must be in its left and greter element must be in its right

### `Conquer`
- Compare the K with the pivot index <br>

  ‣ If K < PivotIdx then recursively saarch in the left part for K index <br>
  ‣ Else if K > PivotIdx then recursively saarch in the right part for K - PivotIdx index 
  
  
### `Combine` 
- Trivial. 


# Splitting 

### `Best Splitting` 
- Divide array into 2 equal sub-arrays
- T(N) = T(N/2) + O(n). Solve using Master `O(n)`

### `Worst Splitting` 
- When selecting Pivot and place it in its proper position it will be in the first or last index 
- So each time the array will be divided into n-1 elements 
- T(N) = T(N-1) + O(N). Solve using Master `O(n^2)` 

### In etween  
- T(N) = T(N/P) + O(n). Using Master `O(n)`
# Complexity 
### `General` 
- T(N) = T(L) or T(N - L) + O(N) 

### `Best Case` 
- Place Pivot in K index in the first time 
- O(n) 


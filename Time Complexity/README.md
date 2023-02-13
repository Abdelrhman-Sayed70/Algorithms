# Time Complexity

## 1- Running Time T(N)
- Calculate the number of steps that the algorithm takes as a function in input size 
- Each operation in the code has a cost 
- Examples :

  ```cpp
  count = count + 1 // Cost1 = 2 
  sum = sum + count // Cost2 = 2
  // Total Cost = 2 + 2 = 4 operations
  ```
  ```cpp
  i = 1; // cost = 1
  sum = 0; // cost = 1
  while(i <= n)  // cost = n + 1 
  {
    i = i + 1;  // cost = 2n 
    sum = sum + 1; // cost = 2n 
  }
  // Total Cost = 1 + 1 + n + 1 + 2n + 2n = 5n + 3 
  ```

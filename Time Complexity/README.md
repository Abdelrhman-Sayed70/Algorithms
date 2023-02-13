# Time Complexity

## `1- Running Time T()`
- Calculate the number of steps that the algorithm takes as a function in input size 
- Each operation in the code has a cost 
- Examples :

  ```cpp
  count = count + 1 // Cost1 = 2 
  sum = sum + count // Cost2 = 2
  // Total Cost = 2 + 2 = 4 steps
  T(N) = 4
  ```
  ```cpp
  i = 1; // cost = 1
  sum = 0; // cost = 1
  while(i <= n)  // cost = n + 1 
  {
    i = i + 1;  // cost = 2n 
    sum = sum + 1; // cost = 2n 
  }
  // Total Cost = 1 + 1 + n + 1 + 2n + 2n = 5N + 3 steps
  T(N) = 5N + 3
  ```
- Relation between the time and input size is **Linear**. When input size increases the total number of operations increases

## `2- Order/Complexity O()`
- **Max** factor in the running time without any constants
- Examples

  ```cpp
  i = 1; // cost = 1
  sum = 0; // cost = 1
  while(i <= n)  // cost = n + 1 
  {
    i = i + 1;  // cost = 2n 
    sum = sum + 1; // cost = 2n 
  }
  // Total Cost = 1 + 1 + n + 1 + 2n + 2n = (5N + 3) steps
  // T(N) = 5N + 3
  // O(N)
  ```
  ```
  T(N) = 10^8 -> O(1)
  T(N) = log(N^1000) -> O(log(N))
  ```
  
  ##### `Large input then Order notation O() is powerful But Small inpute then Running time T(n) is accurate`

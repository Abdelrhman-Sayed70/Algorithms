# Asymptotic Analysis
- `Asymptotic Analysis: study the time complexity of algorithm at large input size`
-  Expressed by :<br>

    ❱ Upper bound: O() [OVER ESTIMATE] <br> 
    ❱ Lower bound: Ω() [UNDER ESTIMATE] <br>
    ❱ Exact bound: Θ() <br>
    
- We alwayes try to get the exact, but some times the calculation of exact may be impossible so we can use upper and lower bound
  
# Terminologies 
- Best, Worst, Expected are `True Cases` for the Algorithm
- To express any case, we must calculate the `Exact` Complexity, if i can't then calculate `Upper` and `Lower` Complexity
- Expected, Worst, Best cases may be equal. Check this code 
  ```cs
  for(int i = 0 ; i * i < n; i++) { sum += i; }
  ```
  `Complexity is O(Sqrt(n)) for all cases`

# Big O() formal definition
- It is function F(n) that its upper bound is O(g(n)) `g(n) above f(n) graphically` when `g(n) >= f(n)`
- May be g(n) be smaller than F(n) but when we multiply g(n) with constant `c` it became greater
- These constraints are valid when `n >= n0`
- `n0`, `c` are positive constants

    ![image](https://user-images.githubusercontent.com/99830416/221245227-d9315216-f9be-485f-97c6-7f743c5788be.png)

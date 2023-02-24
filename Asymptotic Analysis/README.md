# Asymptotic Analysis
- `Asymptotic Analysis: study the time complexity at large input size`
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
  for(int i = 0 ; i * i < n; i++)
  {
    sum += i; 
  }
  ```
  `Complexity is O(Sqrt(n)) for all cases`



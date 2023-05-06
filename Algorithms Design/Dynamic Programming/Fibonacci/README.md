# Fibonacci

## Recursive Solution

```cpp
int fib(int n) {
    if (n <= 1) { return n; }
    return fib(n - 1) + fib(n - 2);
}
int main()) {
    int n; cin >> n;
    cout << fib(n);
}
```

- **We have overlapped sub-problems**
- **Time Complexity → O(2^n)**

## dp solution [Top-Down | Memoization]

```cpp
vector<int>dp(100, -1);
int fib(int n) {
    if (n <= 1) {
        dp[n] = n;
        return dp[n];
    }

    if (dp[n] != -1) { return dp[n]; } // retriving the answer

    dp[n] = fib(n - 1) + fib(n - 2); // saving the answer
    return dp[n];
}
void doIt() {
    int n; cin >> n;
    cout << fib(n);
}
```

- **Enhancement: We define extra storage** `dp` **that will save answer of each sub-problem. Check if the sub-problem is solved or not. If not → solve it & store the answer. Else if it is solved → retrieve the answer.**
- **Time Complexity → O(n)**

## dp solution [Bottom-Up | Tabulation]
```cpp


```

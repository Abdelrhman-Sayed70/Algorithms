# Princess Farida
### [Princess Farida | SPOJ](https://www.spoj.com/problems/FARIDA/)

## Recursive solution 
```cpp
int n;
int solve(int i, vector<int>&v) {
    if (i >= n) { return 0; }

    int a = solve(i + 1, v); // leave the current monester 
    int b = v[i] + solve(i + 2, v); // take the current monester and jump 2 steps 

    return max(a, b);
}
int main {
    cin >> n; 
    vector<ll>dp(1004, -1);
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; } 
    ll ans = solve(0, v);
    cout << ans << "\n"; 
}
```

## dp Recursive Solution 
```cpp
int n;
ll solve(int i, vector<int>&v, vector<ll>&dp) {
    if (i >= n) { return 0; }

    if (dp[i] != -1) { return dp[i]; }

    ll a = solve(i + 1, v, dp); // leave the current monester 
    ll b = v[i] + solve(i + 2, v, dp); // take the current monester and jump 2 steps 

    dp[i] = max(a, b);
    return dp[i];
}
int main() {
    cin >> n; 
    vector<ll>dp(1004, -1);
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; } 
    ll ans = solve(0, v, dp);
    cout << ans << "\n"; 
}
```

## dp Iterative Solution
```cpp
int main() {
    int n;
    cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; } 
    vector<ll>dp(n + 2);
    dp[n] = 0;
    for (int i = n - 1; ~i; i--) {
        ll a = dp[i + 1];
        ll b = (i + 2 <= n ? v[i] + dp[i + 2] : v[i]);
        dp[i] = max(a, b);
    }
    ll ans = dp[0];
    cout << ans << "\n"; 
}
```

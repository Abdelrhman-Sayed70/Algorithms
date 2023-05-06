# Princess Farida
### [Princess Farida | SPOJ](https://www.spoj.com/problems/FARIDA/)

# Recursive solution 
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

# dp Solution 
```cpp

```

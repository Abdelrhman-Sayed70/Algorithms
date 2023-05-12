# B - Frog 2
- [B - Frog 2 | AtCoder](https://atcoder.jp/contests/dp/tasks/dp_b)



## Solution
```cpp
ll solve(int i, int n, vector<int>& v, int k, vector<int>& dp) {
    if (i == n - 1) { return 0; }
    if (i >= n) { return 1e5; } // indicate for impossible path.

    if (dp[i] != -1) { return dp[i]; }

    ll ans = 1e9;
    for (int j = 1; j <= k; j++) {
        ll ans1 = abs(v[i] - v[i + j]) + solve(i + j, n, v, k, dp);
        ans = min(ans, ans1);
    }

    dp[i] = ans;
    return dp[i];
}
void doIt() {
    int n, k; cin >> n >> k; 
    vector<int>v(n + k, 0), dp(n + 5, -1);
    for (int i = 0; i < n; i++) { cin >> v[i]; }
    cout << solve(0, n, v, k, dp);
}
```

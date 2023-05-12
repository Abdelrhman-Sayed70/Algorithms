# Maximum profit from sale of juice
### [Maximum profit from sale of juice | GeeksForGeeks](https://www.geeksforgeeks.org/maximum-profit-sale-wines/)

## Backtracking Solution
```cpp
int solve(int start, int end, int year, vector<int>& v) {
    if (start == end) { return v[start] * year; }

    int left = (v[start] * year) + solve(start + 1, end, year + 1, v);
    int right = (v[end] * year) + solve(start, end - 1, year + 1, v);

    return max(left, right);
}
void doIt() {
    int n; cin >> n;  
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; } 
    cout << solve(0, n - 1, 1, v);
}
```
## dp Solution
```cpp
int solve(int start, int end, int year, vector<int>& v, vector<vector<int>>&dp) {
    if (start == end) { return dp[start][end] = v[start] * year; }

    if (dp[start][end] != -1) { return dp[start][end]; }

    int left = (v[start] * year) + solve(start + 1, end, year + 1, v, dp);
    int right = (v[end] * year) + solve(start, end - 1, year + 1, v, dp);

    dp[start][end] = max(left, right);
    return dp[start][end];
}
void doIt() {
    int n; cin >> n;  
    vector<int>v(n); 
    vector<vector<int>>dp(n, vector<int>(n, -1));
    for (auto& it : v) { cin >> it; } 
    cout << solve(0, n - 1, 1, v, dp);
}
```

## Materials 
### [Maximum profit from sale of juice | Techdose](https://www.youtube.com/watch?v=f4jUEEzjEJw)

## Test case
![image](https://github.com/Abdelrhman-Sayed70/Algorithms/assets/99830416/5a19fd46-8bb6-40c5-9d79-09c3a9f4e5f6)


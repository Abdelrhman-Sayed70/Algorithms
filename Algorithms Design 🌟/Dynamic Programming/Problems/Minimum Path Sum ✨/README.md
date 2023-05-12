# Minimum Path Sum ✨
### [Minimum Path Sum | Leetcode](https://leetcode.com/problems/minimum-path-sum/)
![image](https://github.com/Abdelrhman-Sayed70/Algorithms/assets/99830416/60ea4e0b-2415-4141-a6d2-b905ce358dd6)



## Backtracking Solution

```cpp
int solve(int i, int j, vector<vector<int>>&v) {
    int n = v.size(), m = v[0].size(); 
    if (i == n - 1 and j == m - 1) { return v[i][j]; }

    int a = 1e9, b = 1e9;
    // move right 
    if (j + 1 < m) {
        a = solve(i, j + 1, v);
    }
    // move down 
    if (i + 1 < n) {
        b = solve(i + 1, j, v);
    }

    int bestPath = v[i][j] + min(a, b);
    return bestPath;
}
void doIt() {
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>>v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    n = v.size(), m = v[0].size();
    cout << solve(0, 0, v);
}
```

## dp Solution [Recursive]
```cpp
int solve(int i, int j, vector<vector<int>>&v, vector<vector<int>>&dp) {
    int n = v.size(), m = v[0].size(); 
    if (i == n - 1 and j == m - 1) { return dp[i][j] = v[i][j]; }

    if (dp[i][j] != -1) { return dp[i][j]; }

    int a = 1e8, b = 1e8; // indicates that i can't move to this path
    // move right 
    if (j + 1 < m) {
        a = solve(i, j + 1, v, dp);
    }
    // move down 
    if (i + 1 < n) {
        b = solve(i + 1, j, v, dp);
    }

    int bestPath = v[i][j] + min(a, b);
    dp[i][j] = bestPath;
    return bestPath;
}
void doIt() {
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>>v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    vector<vector<int>>dp(n, vector<int>(m, -1));
    cout << solve(0, 0, v, dp);
}
```

## dp Solution [Iterative]
```cpp
void doIt() {
    int n, m; 
    cin >> n >> m; 
    vector<vector<int>>v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    vector<vector<int>>dp(n, vector<int>(m, 0));
    dp[0][0] = v[0][0]; 

    // fill 1st col 
    for (int i = 1; i < n; i++) 
        dp[i][0] = v[i][0] + dp[i - 1][0]; 

    // fill 1st row 
    for (int j = 1; j < m; j++) 
        dp[0][j] = v[0][j] + dp[0][j - 1]; 
    
    // fill the rest of dp
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            dp[i][j] = v[i][j] + min(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    cout << dp[n - 1][m - 1];
}
```

### [Tutorial | Youtube](https://youtu.be/t1shZ8_s6jc)

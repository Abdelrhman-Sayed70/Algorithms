# Subset Sum Problem
### [Subset Sum Problem](https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## Solution 
```cpp
bool ok = false; 
vector<int>path;
set<vector<int>>paths;
void solve(int i, int cur, int target, vector<int>& v, vector<vector<bool>>&dp) {
    if (cur == target) {
        ok = true;
        paths.insert(path);
        return;
    }
    if (cur > target or i == v.size()) {
        return;
    }

    if (dp[i][cur]) { return; }
    
    if (cur + v[i] <= target) {
        path.push_back(v[i]); // save the path
        solve(i + 1, cur + v[i], target, v, dp); // take 
        path.pop_back(); // backtrack
    }
    solve(i + 1, cur, target, v, dp); // leave

    dp[i][cur] = true;
}
void doIt() {
    int n, target;
    cin >> n >> target;
    vector<int>v(n);
    vector<vector<bool>>dp(n, vector<bool>(target + 1, 0));
    for (auto& it : v) { cin >> it; } 
    solve(0, 0, target, v, dp);
    cout << (ok ? "Yes\n" : "No\n");
    cout << "Paths are:\n";
    for (auto it : paths) {
        for (int i = 0; i < it.size(); i++) {
            cout << it[i] << " ";
        }
        cout << "\n";
    }
}
```

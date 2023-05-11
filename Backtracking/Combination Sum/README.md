# Combination Sum
### [Combination Sum | Leetcode](https://leetcode.com/problems/combination-sum/)

## Solution 
```cpp
vector<int>path; 
vector<vector<int>>paths;
void solve(int i, int cur, int target, vector<int>& v) {
    if (i == v.size()) { return; }
    if (cur > target) { return; }
    if (cur == target) {
        paths.push_back(path);
        return;
    }
    path.push_back(v[i]);
    solve(i, cur + v[i], target, v);
    path.pop_back();
    
    solve(i + 1, cur, target, v);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    solve(0,0,target, candidates);
    return paths;
}
```

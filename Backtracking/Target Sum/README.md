# Target Sum
### [Target Sum | Leetcode](https://leetcode.com/problems/target-sum/)

## Solution 
```cpp
int solve(int i, int cur, int target,vector<int>& v) {
    if (i == v.size()) {
        if (cur == target) { return 1; } 
        else { return 0; }
    }
    int a = solve(i + 1, cur + v[i], target, v); 
    int b = solve(i + 1, cur - v[i], target, v); 
    return a + b; 
}
void doIt() {
    int n, target;
    cin >> n >> target; 
    vector<int>v(n);
    for (auto& it : v) { cin >> it; } 
    int ans = solve(0, 0, target, v);  
    cout << ans << "\n";
}
```

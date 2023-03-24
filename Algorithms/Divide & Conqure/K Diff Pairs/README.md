# K-diff Pairs in an Array

### [K-diff Pairs in an Array](https://leetcode.com/problems/k-diff-pairs-in-an-array/)

## Approach
If we sort the array so we make sure that all values indices greater than the current index are greater than the value of the current value  <br>
So we search for X such : `X - Arr[i] = K` `X = K + Arr[i]`. Now we can search for value X in the remaining array from index (i + 1) till end 

## Code
```cpp
int solve(vector<int>& v, int start, int end, int val) {
    if (start > end) { return 0; }
    int mid = (start + end) / 2;
    if (v[mid] == val) { return 1; }
    else if (v[mid] > val) { return solve(v, start, mid - 1, val); }
    else if (v[mid] < val) { return solve(v, mid + 1, end, val); }
}
void do_it() {
    int n, k; cin >> n >> k; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    sort(v.begin(), v.end());
    int cnt = 0;
    unordered_map<int, int>mp;
    for (int i = 0; i < n; i++) {
        if (!mp[v[i]]) cnt += solve(v, i + 1, n - 1, v[i] + k), mp[v[i]] = 1;
    }
    cout << cnt; 
}
```
- `Divide` Devide the arr into 2 sub-arrayes
- `Conqure` Solve each sub in the same manner 
- `Combine` Trivial `Limitation approach`



## Complexity
- `O(N.Log(N))`

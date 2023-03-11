# [Knapsack](https://codeforces.com/group/gA8A93jony/contest/270592/problem/J)

# Solution [recursive]
```cpp
int n, w;
vector<pair<int, int>>v;
int mx = 0;
void solve(int index, int curval, int remain_weight) {
    if (index == n) { if (remain_weight >= 0) mx = max(mx, curval); return; }
    if (remain_weight - v[index].first >= 0)
        solve(index + 1, curval + v[index].second, remain_weight-v[index].first);
    solve(index + 1, curval, remain_weight);
}
void you_can_do_it() {
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        int w, val;
        cin >> w >> val;
        v.push_back({ w, val });
    }
    solve(0, 0, w);
    cout << mx ;
}
```

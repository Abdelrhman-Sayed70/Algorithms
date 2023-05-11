# Apple Division 
### [Apple Division | CSES](https://cses.fi/problemset/task/1623)

## Approach

## Solution 
```cpp
ll mn = 1e9 + 8;
void solve(int i, ll sum1, ll overall, vector<ll>& v, int n) {
    if (i == n) {
        ll sum2 = overall - sum1; 
        mn = min(mn, abs(sum1 - sum2));
        return;
    }
    solve(i + 1, sum1 + v[i], overall, v, n); //take
    solve(i + 1, sum1, overall, v, n); //leave
}
void doIt() {
    int n; cin >> n; 
    vector<ll>v(n); 
    ll sum = 0;
    for (auto& it : v) { cin >> it; sum += it; }
    solve(0, 0, sum, v, n); 
    cout << mn; 
}
```

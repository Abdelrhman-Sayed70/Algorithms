# D - Knapsack 1
### [D - Knapsack 1 | AtCoder](https://atcoder.jp/contests/dp/tasks/dp_d)

## Bruteforce Solution [TL]
```cpp
ll knapsack(int i, int remain, vector<pair<int, ll>>items) {
    if (i == items.size()) { return 0; }
    ll take = -1;
    if (remain - items[i].first >= 0)
        take = items[i].second + knapsack(i + 1, remain - items[i].first, items);
 
    ll leave = knapsack(i + 1, remain, items);
 
    ll mx = max(take, leave);
    return mx;
}
void doIt() {
    int n, maxW;
    cin >> n >> maxW; 
    vector<pair<int, ll>>items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
    }
    cout << knapsack(0, maxW, items);
}
```

## dp Solution 
```cpp


```

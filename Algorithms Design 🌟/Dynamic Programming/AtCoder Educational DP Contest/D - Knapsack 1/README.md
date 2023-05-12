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
- Here we will use 2d dp that held the index and current free weight
- Passing by reference is important to avoid TLE
```cpp
ll knapsack(int i, int remain, vector<pair<int, ll>>&items, vector<vector<ll>>&dp) {
    if (i == items.size()) { return 0; }

    if (dp[i][remain] != -1) { return dp[i][remain]; }

    ll take = -1;
    if (remain - items[i].first >= 0)
        take = items[i].second + knapsack(i + 1, remain - items[i].first, items,dp);

    ll leave = knapsack(i + 1, remain, items, dp);

    dp[i][remain] =  max(take, leave);
    return dp[i][remain];
}
void doIt() {
    int n, maxW;
    cin >> n >> maxW;
    vector<pair<int, ll>>items(n);
    vector<vector<ll>>dp(n, vector<ll>(maxW + 1, -1));
    for (int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
    }
    cout << knapsack(0, maxW, items, dp);
}
```

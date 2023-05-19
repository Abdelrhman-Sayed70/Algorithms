# Knapsack Items
## [Knapsack Items | Codeforces](https://codeforces.com/gym/389971/problem/B)


## Solution
```cpp
vector<int>takenItems;
ll knapsack(int i, int remain, vector<pair<int, ll>>& items, vector<vector<ll>>& dp) {
    if (i == items.size()) { return 0; }

    if (dp[i][remain] != -1) { return dp[i][remain]; }

    ll take = -1;
    if (remain - items[i].first >= 0)
        take = items[i].second + knapsack(i + 1, remain - items[i].first, items, dp);

    ll leave = knapsack(i + 1, remain, items, dp);

    dp[i][remain] = max(take, leave);
    return dp[i][remain];
}
void build(int i, int remain, vector<pair<int, ll>>& items, vector<vector<ll>>& dp) {
    if (i == items.size()) { return; }

    ll dpVal = dp[i][remain];

    ll take = items[i].second + knapsack(i + 1, remain - items[i].first, items, dp);
    if (dpVal == take) {
        takenItems.push_back(i);
        build(i + 1, remain - items[i].first, items, dp);
    }
    else {
        //ll leave = knapsack(i + 1, remain, items, dp);
        build(i + 1, remain, items, dp);
    }
}
void doIt() {
    int n, maxW;
    cin >> n >> maxW;
    vector<pair<int, ll>>items(n);
    vector<vector<ll>>dp(n, vector<ll>(maxW + 1, -1));
    for (int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
    }
    cout << "Max Profit: " << knapsack(0, maxW, items, dp) << "\n";
    build(0, maxW, items, dp);
    cout << "Taken items: \n";
    for (auto it : takenItems) {
        cout << "item # " << it + 1 << " with Wieght: " << items[it].first << "\n";
    }
    cout << "\n";
    takenItems.clear();
}
```
## Testcases
### Case 1
```
input:
3 8
3 30
4 50
5 60

output:
Max Profit: 90
Taken items:
item # 1 with Wieght: 3
item # 3 with Wieght: 5
```

### Case 2
```
input:
6 15
6 5
5 6
6 4
6 6
3 5
7 2

output:
Max Profit: 17
Taken items:
item # 2 with Wieght: 5
item # 4 with Wieght: 6
item # 5 with Wieght: 3
```

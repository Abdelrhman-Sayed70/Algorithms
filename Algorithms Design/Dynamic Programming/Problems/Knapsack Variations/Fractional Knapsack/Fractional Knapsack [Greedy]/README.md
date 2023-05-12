# Fractional Knapsack

## [Fractional Knapsack | Codeforces](https://codeforces.com/group/Z2G2riS3Yo/contest/428854/problem/C) 
*The problem is private in acmASCIS sheet on codeforces. It might not open with you*
##  [Fractional Knapsack | Geeks For Geeks](https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)
## Code
```cpp
int main() {
    cout << fixed << setprecision(4);
    int n, k; 
    cin >> n >> k;
    double ans = 0;
    vector<double>Weight(n), Cost(n);
    vector<pair<double, double>>gramCost;
    for (int i = 0; i < n; i++) {
        cin >> Weight[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> Cost[i];
    }
    for (int i = 0; i < n; i++) {
        gramCost.push_back({ Cost[i] / Weight[i],Weight[i]});
    }
    sort(all(gramCost));
    reverse(all(gramCost));
    for (int i = 0; i < n; i++) {
        if (gramCost[i].second <= k) {
            ans += (gramCost[i].first* gramCost[i].second);
            k -= gramCost[i].second;
        }
        else {
            ans += gramCost[i].first*k;
            break;
        }
    }
    cout << ans;
}
```
## Complexity 
- O(N.Log(N)) 
- `Can we make it better? Think of Kth element technique`

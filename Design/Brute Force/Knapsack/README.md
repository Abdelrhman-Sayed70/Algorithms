# [Knapsack](https://codeforces.com/group/gA8A93jony/contest/270592/problem/J)
![image](https://user-images.githubusercontent.com/99830416/222934773-aedbceee-f0ca-48a9-8eb2-711e736f28ce.png)

### `TAKE OR LEAVE` approache

# Complexity 
### `O(2^n)`

# Solution [bitmask]
```cpp
#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define el cout << "\n" 
//*********************
int getBit(int n, int index) {
    return ((n >> index) & 1);
}
void you_can_do_it() {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>>v(n); // weight, value
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    // bitmask from 0 to (2^n)-1
    int mx = 0;
    for (int i = 0; i < 1 << n; i++) {
        int curval = 0, curweight = 0;
        for (int j = 0; j < n; j++) {
            if (getBit(i, j)) {
                curweight += v[j].first;
                if (curweight <= w) curval += v[j].second;
            }
        }
        mx = max(mx, curval);
    }
    cout << mx;
    el;
}
//*********************             
int main() {
    //files();
    fastIO;
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        you_can_do_it();
    }
}
```

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
int main() {
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

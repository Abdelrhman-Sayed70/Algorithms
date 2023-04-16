# Transformation From A To B
## [Transformation From A To B | Codeforces](https://codeforces.com/contest/727/problem/A)

## Backtracking Approach 
- We need to make a equal to b.
- We need to keep track of the path so we will use backtracking

## Backtracking Solution
```cpp
vector<ll>path, bestPath;
bool valid = false;
void solve(ll a, int b) {
    if (a == b) {
        valid = true;
        bestPath = path;
        return;
    }
    if (a > b) {
        return;
    }
    // backtracking 
    path.push_back(a * 2);
    solve(a * 2, b);
    path.pop_back();

    path.push_back(a * 10 + 1);
    solve(a * 10 + 1, b);
    path.pop_back();
}
int main() {
    int a, b;
    cin >> a >> b; 
    path.push_back(a);
    solve(a, b);
    if (valid) {
        cout << "YES\n";
        cout << bestPath.size() << "\n";
        for (auto it : bestPath) { cout << it << " "; }
    }
    if (!valid) { no; }
}
```

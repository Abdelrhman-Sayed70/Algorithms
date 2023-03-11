# [Power Sum](https://www.hackerrank.com/challenges/the-power-sum/problem?isFullScreen=true)
# Hint
### `Take or Leave` Sum = [1^n or 0] + [2^n or 0] + [3^n or 0] + [..]
# Solution
```cpp
ll x, n, cnt;
void solve(ll i, ll sum) {
    if (sum > x) { return; }
    if (i == 50) { if (sum == x) { cnt++; } return; }
    solve(i + 1, sum + pow(i, n));
    solve(i + 1, sum);
}
int main() {
    cnt = 0;
    cin >> x >> n;
    solve(1, 0);
    cout << cnt;
}
```

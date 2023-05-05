# Number of Paths
- [Number of paths | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/number-of-paths0926/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)
# Solution
```cpp
int n, m; 
int generatePaths(int i, int j) {
    int count = 0;
    if (i == n - 1 and j == m - 1) { return 1; }
    if (i + 1 < n) {
        count += generatePaths(i + 1, j);
    }
    if (j + 1 < m) {
        count += generatePaths(i, j + 1);
    }
    return count;
}
void doIt() {
    cin >> n >> m;
    cout << generatePaths(0, 0);
}
```

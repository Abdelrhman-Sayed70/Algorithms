# Generate all Paths from A to B in 2D Grid
![image](https://user-images.githubusercontent.com/99830416/236549567-90b016fa-8be8-42c1-bdd5-8b60a0a7494f.png)

### [Generating the paths | Codeforces](https://codeforces.com/group/gA8A93jony/contest/270592/problem/N)



# Solution
```cpp
int n, m;
vector<int> path;
set<vector<int>>ans;
void printPath(vector<int>v) {
    for (auto it : v) {
        cout << it << " ";
    }
    cout << "\n";
}
void generatePaths(vector<vector<int>>v, int i, int j) {
    path.push_back(v[i][j]);
    if (i == n - 1 and j == m - 1) {
        //printPath(path);
        ans.insert(path);
        return;
    }
    // go right (increase j)
    if (j + 1 < m) {
        generatePaths(v, i, j + 1);
        // path ends & backtrack
        path.pop_back();
    }
    // go down (increase i)
    if (i + 1 < n) {
        generatePaths(v, i + 1, j);
        // path ends & backtrack
        path.pop_back();
    }
}
int main() {
    cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    generatePaths(v, 0, 0);
    cerr << "--\n";
    for (auto it : ans) {
        for (int i = 0; i < it.size(); i++) {
            cout << it[i] << " ";
        }
        cout << "\n";
    }
}
```

# CD
### [CD | Vjudge](https://vjudge.net/contest/485599#problem/B)
- Backtracking problem. Get the best path

# Solution
```cpp
vector<int>songs, bestPath;
int mx;
void solve(int i, int cur, int capacity, vector<int>&path) {
    if (i == songs.size()) {
        if (cur > mx) {
            mx = cur;
            bestPath = path;
        }
        return;
    }
    if (cur + songs[i] <= capacity) {
        path.push_back(songs[i]);
        solve(i + 1, cur + songs[i], capacity, path); // Take this current song
        path.pop_back(); // Backtrack and remove the current song from the path
    }

    solve(i + 1, cur, capacity, path); // Skip this song
}
int main() {
    int n; 
    while (cin >> n) {
        mx = 0;
        int m; cin >> m; 
        for (int i = 0; i < m; i++) {
            int a; cin >> a; 
            songs.push_back(a);
        }
        vector<int>path;
        solve(0, 0, n, path);
        for (auto& it : bestPath) { cout << it << " "; }
        cout << "sum:" << mx << "\n";
        songs.clear();
        bestPath.clear();
    }
}
```

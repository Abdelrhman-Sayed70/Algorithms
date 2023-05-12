# Connected Component Number
# Toutorial 
- [Number of Provinces | LeetCode](https://leetcode.com/problems/number-of-provinces/)
- [Number of Provinces | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

# Approach
Start dfs from from any point and check the other all points. if the current point is not visited (from other bfs) then it is in another component, so start bfs on this point 


# Code
```cpp
bool visited[300];
void dfs(int node, vector<vector<int>>&graph) {
    //cout << node << "\n";
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
             dfs(child, graph);
    }
}
int main() {
    int n; cin >> n; 
    vector<vector<int>>graph(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a; cin >> a; 
            if (a) {
                graph[i].push_back(j);
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, graph);
            cnt++;
        }
    }
    cout << cnt;
}
```


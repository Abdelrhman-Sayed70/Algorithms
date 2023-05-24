# Count Nodes
**Count Nodes Starting From Entry Node Using BFS**
```cpp
bool visited[1000];
int dfsCountGraphNodes(int node, vector<vector<int>>& graph) {
    int ans = 1;
    visited[node] = 1;
    for (int child : graph[node]) {
        if (!visited[child])
            ans += dfsCountGraphNodes(child, graph);
    }
    return ans;
}
```

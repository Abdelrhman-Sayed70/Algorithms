## Check Graph Connectivity [Directed & Undirected]
`Graph Contains n nodes which equal to number of vertices`
```cpp
bool visited[1000];
int dfs(int node, vector<vector<int>>&graph) {
    int visCount = 1;
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
            visCount += dfs(child, graph);
    }
    return visCount;
}
int main() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    int nodes = dfs(anyGraphNode, graph);
    if (nodes == vertices) { cout << "Connected Graph"; }
}
```

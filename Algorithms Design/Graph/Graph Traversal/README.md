# Graph Represenation

# DFS
```cpp
bool visited[1000];
void dfs(int node, vector<vector<int>>&graph) {
    cout << node << "\n";
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
            dfs(child, graph);
    }
}
int main() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1, graph);
    // graph 
    /*
     6 4 
     1 2
     1 5
     2 3
     2 4 
    */
}
```

# BFS

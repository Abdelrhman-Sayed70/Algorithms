# `Undirected Graph Cycle Detection`
### [Detect cycle in an undirected graph | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)
# Approach 
- `DFS Approach` **To detect undirected graph cycle, we should mark any node we visit till now, if the current node is already visited and not its parent, then its cycle. We implement it using dfs**
- `BFS Approach` 

# DFS Approach 
```cpp
bool cycle = false;
void dfs(int node, int parent, vector<vector<int>>& graph, vector<bool>&visited) {
    visited[node] = 1;
    //cout << "node: " << node << ", parent: " << parent << "\n";
    for (auto child : graph[node]) {
        if (!visited[child]) {
            dfs(child, node, graph, visited);
        }
        else if (visited[child] and child != parent) {
            cycle = true; return;
        }
    }
}
void doIt() {
    cycle = false; 
    int vertices, edges;
    cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    vector<bool>visited(vertices + 1); 
    for (int i = 0; i < vertices; i++) {
        if (!visited[i])
            dfs(i, -1, graph, visited);
    }
    cout << (cycle ? "YES\n" : "NO\n");
}
```

# BFS Approach
```cpp

```

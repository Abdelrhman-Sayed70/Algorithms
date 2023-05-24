# `Undirected Graph Cycle Detection`
### [Detect cycle in an undirected graph | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)
# Approach 
- `DFS Approach` **To detect undirected graph cycle, we should mark any node we visit till now, if the current node is already visited and not its parent, then its cycle. We implement it using dfs**
- `BFS Approach` 

# DFS Approach 
```cpp
bool ok = false;
void dfs(int node, vector<vector<int>>graph, vector<char>& color, vector<int>& parent) {
    color[node] = 'g';
    for (auto child : graph[node]) {
        // node is the source and child is the destination 
        if (color[child] == 'w') {
            parent[child] = node;
            dfs(child, graph, color, parent);
        }
        else if (color[child] == 'g' and child != parent[node]) {
            ok = true;
            return;
        }
    }
    color[node] = 'b';
}
void doIt() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // for undirected graph
    }
    ok = false;
    vector<char> color(1e5 + 5, 'w');
    vector<int> parent(1e5 + 5, -1);
    for (int i = 0; i < vertices; i++) {
        if (color[i] == 'w') {
            dfs(i, graph, color, parent);
        }
    }
    ok ? yes : no;
}
```

# BFS Approach
```cpp

```

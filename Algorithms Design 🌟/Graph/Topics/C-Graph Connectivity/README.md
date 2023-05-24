# Graph Connectivity
## Check Graph Connectivity [Directed & Undirected]
**`Graph Contains n nodes which equal to number of vertices`**

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

## Check Connection between 2 nodes [Directed & Undirected]
### [Find if Path Exists in Graph | Leetcode](https://leetcode.com/problems/find-if-path-exists-in-graph/description/)
```cpp
bool checkConecction(int node, int target, vector<vector<int>>& graph) {
    visited[node] = true;
    if (node == target) {
        return true;
    }
    for (int adj_node : graph[node]) {
        if (!visited[adj_node]) {
            if (checkConecction(adj_node, target, graph)) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        //graph[v].push_back(u);
    }
    int a, b; cin >> a >> b;  
    checkConecction(a, b, graph) ? yes : no;
}
```

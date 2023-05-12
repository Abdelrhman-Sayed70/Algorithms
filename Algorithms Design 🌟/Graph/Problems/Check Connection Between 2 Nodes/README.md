# Check Connection Between 2 Nodes
Check if there is a path between 2 nodes for directed & undirected graph
# Code
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

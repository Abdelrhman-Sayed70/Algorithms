# `Directed Graph Cycle Detection` 
### [Detect cycle in a directed graph | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1)
## `Approach`
**The only difference between this this approach and the approach if undirected graph is the check if the child not equal to the parent of this child**
## `Solution`
```cpp
bool ok = false;
void dfs(int node, vector<int>graph [], vector<char>& color, vector<int>& parent) {
    color[node] = 'g';
    for (auto child : graph[node]) {
        // node is the source and child is the destination 
        if (color[child] == 'w') {
            parent[child] = node;
            dfs(child, graph, color, parent);
        }
        else if (color[child] == 'g') {
            ok = true;
            return;
        }
    }
    color[node] = 'b';
}
// Function to detect cycle in a directed graph.
bool isCyclic(int V, vector<int> adj[]) {
    ok = false;
    vector<char> color(V + 1, 'w');
    vector<int> parent(V + 1, -1);
    for (int i = 0; i < V; i++) {
        if (color[i] == 'w') {
            dfs(i, adj, color, parent);
        }
    }
    return ok;
}
```

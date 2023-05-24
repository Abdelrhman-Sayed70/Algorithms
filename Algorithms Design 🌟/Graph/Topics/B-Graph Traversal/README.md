# Graph Represenation & Traversal

# Enter Graph
```cpp
int main() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // for undirected graph
    }
}
```

# Graph Traversal Complexity
**`O(|V| + |E|)`** <br>
**Traverse all vertices and edges**
  
# Tree 
- Has no cycles

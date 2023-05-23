# Graph Represenation
# Materials
### [Graph Represenation | CS Academy](https://csacademy.com/lesson/graph_representation)

# Input & Basic Output Graph  
```cpp
int vertices, edges; cin >> vertices >> edges;
//each value in vector will contain vector of its connect nodes [node, Cost]
vector<vector<pair<int,int>>>graph(vertices);
//each edge contains 2 values: u -> v with price c
for (int i = 0; i < edges; i++) {
    int u, v, c; 
    cin >> u >> v >> c; 
    graph[u].push_back({v, c});
    // graph[v].push_back({ u, c }); // in case of undirected graph
}

// print the adjacency list
cout << "\n";
for (int u = 0; u < vertices; u++) {
    cout << u << "\n----\n";
    for (auto it : graph[u]) {
        cout << "node: " << it.first << " price: " << it.second << "\n";
    }
    cout << endl;
}
```

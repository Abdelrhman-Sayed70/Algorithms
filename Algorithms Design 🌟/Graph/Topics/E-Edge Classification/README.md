# Edge Classifications⛓️

# Color Reference

- **White** ▶ has not been discovered.
- **Grey** ▶discovered but not fully explored.
- **Black ▶** discovered and fully explored.

## Backward Edge

- On tree the edge connects `bottom node [child]` with `top node [gray parent]`
- Edge makes cycle.
- Edge connects child with any of its parents.
- Go to **Gray** node.

## Forward Edge

- On tree, the edge goes from `top [parent]` to `bottom [black child of the top]` 
- Go to **Black** node & discoveryTime(source) < discoveryTime(destination)

## Cross Edge [In Directed Graphs Only]

- On tree the edge connects 2 nodes in different trees, or 2 different branches in the same tree
- Go to **Black** node & discoveryTime(source) > discoveryTime(destination)

# Edge Classification [Directed & Undirected]
```cpp
int backword, forwardd, cross, Time;
vector<char> color(100, 'w');
vector<int> parent(100, -1), discovery(100), delivery(100);
//map<int, char>color;
//map<int, int>parent, discovery, delivery;
void dfs(int node, vector<vector<int>>& graph) {
    Time++;
    color[node] = 'g';
    discovery[node] = Time;
    cout << "node: " << node << ", parent: " << parent[node] << " discovery time: " << discovery[node] << "\n";
    for (auto child : graph[node]) {
        // node is the source and child is the destination 
        if (color[child] == 'w') {
            cout << "tree edge: " << node << " -> " << child << "\n";
            parent[child] = node;
            dfs(child, graph);
        }
        else if (color[child] == 'g' and child != parent[node]) {
            cout << "backword edge: " << node << " -> " << child << "\n";
            backword++;
        }
        else if (color[child] == 'b' and discovery[node] < discovery[child]) {
            cout << "forward edge: " << node << " -> " << child << "\n";
            forwardd++;
        }
        else if (color[child] == 'b' and discovery[node] > discovery[child]) {
            cout << "cross edge: " << node << " -> " << child << "\n";
            cross++;
        }
    }
    color[node] = 'b';
    delivery[node] = Time + 1;
}
void doIt() {
    backword = forwardd = cross = Time = 0;
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // for undirected graph
    }
    for (int i = 0; i < vertices; i++) {
        if (color[i] == 'w') {
            dfs(i, graph);
        }
    }
    cout << "\nNumber of backward edges: " << backword << "\n";
    cout << "Number of forward edges: " << forwardd << "\n";
    cout << "Number of cross edges: " << cross << "\n";
}
```
**Notes**
- There are no cross edges in undirected graph.
- In Undirected graph alwayes number of backword edges equal to number of forward edges.

# Shortest Paths
## Shortest Path [Min Traversed Nodes / Edges]
**It can be implemented using `BFS` as it traverse graph level by level. The counter will be incremented when traverse all level nodes**
```cpp
map<int,bool>visited;
int shortestPath(int node1, int node2, vector<vector<int>>& graph) {
    // assum that graph level start from level 1
    queue<int>nextToVisit;
    nextToVisit.push(node1);
    int lvl = 1;
    while (nextToVisit.size()) {
        int sz = nextToVisit.size();
        lvl++;
        for (int i = 0; i < sz; i++) {
            int current = nextToVisit.front();
            visited[current] = 1;
            nextToVisit.pop();
            for (auto child : graph[current]) {
                if (!visited[child]) {
                    nextToVisit.push(child);
                    visited[child] = 1;
                    if (child == node2) { return lvl; }
                }
            }
        }
    }
    return -1;
}
void do_it() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // for undirected graph
    }
    while (true) {
        int a, b;
        cout << "enter 2 nodes: "; cin >> a >> b;
        int path = shortestPath(a, b, graph);
        cout << "level of node2 from node1 is: " << path << "\n";
        if (path == -1) { cout << "\n"; continue; }
        // min number of traversed nodes to reach b from a (excluding node1 and node2)
        cout << "shortest path (min number of nodes): " << path - 2 << "\n";
        // min number of traversed edges to reach b from a
        cout << "shortest path (min number of edges): " << path - 1 << "\n\n";
        visited.clear();
    }
}
```
## Shortest Path [Min Cost]
- It can be implemented using dijstra

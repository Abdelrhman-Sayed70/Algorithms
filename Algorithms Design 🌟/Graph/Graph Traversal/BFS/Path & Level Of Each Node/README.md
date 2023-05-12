# ☢ Path & Level Of Each Node
```cpp
bool visited[1000];
unordered_map<int, int>lvl, parent;
vector<int> getPath(int node) {
    vector<int>path;
    while (node != -1) {
        path.push_back(node);
        node = parent[node];
    }
    reverse(all(path));
    return path;
}
void bfs(int node, vector<vector<int>>& graph) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    parent[node] = -1;
    lvl[node] = 0;
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
        visited[current] = 1;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (!visited[child]) {
                nextToVisit.push(child), visited[child] = 1;
                lvl[child] = lvl[current] + 1;
                parent[child] = current;
            }
        }
    }
}
void doIt() {
    int vertices, edges; 
    cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    // note vertices are 1 based
    for (int i = 1; i <= vertices; i++) {
        if (!visited[i]) { bfs(i, graph); }
    }
    while (true) {
        cout << "Enter node you want to get its path: ";
        int node; cin >> node;
        cout << "Path: ";
        vector<int>path = getPath(node);
        for (auto it : path) { cout << it << " "; }
        cout << "\n";
    }
}
```

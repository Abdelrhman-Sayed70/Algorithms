# BFS
**`Breadth First Search` Traverse the graph level by level**
# Tutorials
- [BFS Toutorial | CS Academy](https://csacademy.com/lesson/breadth_first_search)
## Traverse
```cpp
bool visited[1000];
void bfs(int node, vector<vector<int>>& graph) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n";
        visited[current] = 1; 
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (!visited[child])
                nextToVisit.push(child), visited[child] = 1;
        }
    }
}
```

## ☢ Traverse with Level, Parent & Color 
```cpp
vector<char>color(100, 'w');
vector<int>level(100), parent(100);
void bfs(int node, vector<vector<int>>& graph) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    parent[node] = -1;
    level[node] = 0;
    color[node] = 'g';
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        cout << current << "\n" ;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (color[child] == 'w') {
                nextToVisit.push(child);
                color[child] = 'g';
                level[child] = level[current] + 1;
                parent[child] = current;
            }
        }
        color[current] = 'b';
    }
}
void doIt() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);  
    }
    for (int i = 1; i <= vertices; i++) {
        if (color[i] == 'w')
            bfs(i, graph);
    }
}
```

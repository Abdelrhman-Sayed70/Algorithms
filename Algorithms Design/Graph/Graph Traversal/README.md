# Graph Represenation

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
    dfs(1, graph);
}
```

DFS
`Depth First Search` Traverse Depth to the bottom node
### [DFS Toutorial | CS Academy](https://csacademy.com/lesson/depth_first_search)
## DFS 
```cpp
bool visited[1000];
void dfs(int node, vector<vector<int>>&graph) {
    cout << node << "\n";
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
            dfs(child, graph);
    }
} 
``` 
    
# BFS
`Breadth First Search` Traverse level by level
### [BFS Toutorial | CS Academy](https://csacademy.com/lesson/breadth_first_search)
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
    
# Directed Graph | Unconnected Traverse
![image](https://user-images.githubusercontent.com/99830416/230778759-808206dc-4e44-4616-849b-ab6615cc76d3.png)
    
Here if we traverse this graph from node 0 we will not reach node 1 so how to traverse directed graph and avoid this problem? 
- First pick a node and call the DFS algorithm with that starting point.
- While there still are some unvisited nodes, pick one of them and call the DFS algorithm again using that particular node as the starting point.
```cpp
bool visited[1000];
void dfs(int node, vector<vector<int>>&graph) {
    cout << node << "\n";
    visited[node] = 1;
    for (auto child : graph[node]) {
        if (!visited[child])
             dfs(child, graph);
    }
    
}    
int main() {
    int vertices, edges; cin >> vertices >> edges;
    vector<vector<int>>graph(vertices);
    for (int i = 0; i < edges; i++) {
        int u, v, c;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) { dfs(i, graph); }
    }
}
```

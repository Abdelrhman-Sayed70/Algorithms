# Graph Represenation

# Enter Graph 
> ```cpp
> int main() {
>     int vertices, edges; cin >> vertices >> edges;
>     vector<vector<int>>graph(vertices + 1);
>     for (int i = 0; i < edges; i++) {
>         int u, v, c;
>         cin >> u >> v;
>         graph[u].push_back(v);
>         graph[v].push_back(u); // for undirected graph
>     }
>     dfs(1, graph);
> }
> ```

# DFS
`Depth First Search` Traverse Depth to the bottom node
### [DFS Toutorial | CS Academy](https://csacademy.com/lesson/depth_first_search)
## Graph Traverse [Undirected]
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
## Graph Traverse [Directed] 
- First pick a node and call the DFS algorithm with that starting point.
- While there still are some unvisited nodes, pick one of them and call the DFS algorithm again using that particular node as the starting point.
```cpp
    
    
```
    
## Check Graph Connectivity [Directed & Undirected]
`Graph Contains n nodes which equal to number of vertices`
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
```

## Edge Classification
![image](https://user-images.githubusercontent.com/99830416/230777752-1e69d495-f805-4091-90b6-c819a742ddf6.png)

#### `Tree Edge` 
- Edges that discover new nodes.
- Straight line 

#### `Cross Edge`
- Edge that connect 2 nodes from different subtrees
- Dashed line from the another subtree. --->
    
#### `Back Edge`
- Edge between child and it's base father
- Red line

#### `Forward Edge`
- 
- Purple Line
    
# BFS
> `Breadth First Search` Traverse level by level
> ## Traverse
> ```cpp
> bool visited[1000];
> void bfs(int node, vector<vector<int>>& graph) {
>     queue<int>nextToVisit;
>     nextToVisit.push(node);
>     while (nextToVisit.size()) {
>         int current = nextToVisit.front();
>         cout << current << "\n";
>         visited[current] = 1; 
>         nextToVisit.pop();
>         for (auto child : graph[current]) {
>             if (!visited[child])
>                 nextToVisit.push(child), visited[child] = 1;
>         }
>     }
> }
> ```
 

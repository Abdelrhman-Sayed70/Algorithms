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
>         graph[v].push_back(u);
>     }
>     dfs(1, graph);
> }
> ```

# DFS
> `Depth First Search` Traverse Depth to the bottom node
> 
> ## Traverse Graph
> ```cpp
> bool visited[1000];
> void dfs(int node, vector<vector<int>>&graph) {
>     cout << node << "\n";
>     visited[node] = 1;
>     for (auto child : graph[node]) {
>         if (!visited[child])
>             dfs(child, graph);
>     }
> } 
> ```
> ## Check Graph Connectivity
> `Graph Contains n nodes which equal to number of vertices`
> ```cpp
> bool visited[1000];
> int dfs(int node, vector<vector<int>>&graph) {
>     int visCount = 1;
>     visited[node] = 1;
>     for (auto child : graph[node]) {
>         if (!visited[child])
>             visCount += dfs(child, graph);
>     }
>     return visCount;
> }
> ```

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
 

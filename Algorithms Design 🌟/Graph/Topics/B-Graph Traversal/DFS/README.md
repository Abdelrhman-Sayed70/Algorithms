# DFS 
**`Depth First Search` Traverse Depth to the bottom node**
# Tutorials
- [DFS  Tutorial | CS Academy](https://csacademy.com/lesson/depth_first_search)
## Traverse
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
DFS be like 🤣

https://user-images.githubusercontent.com/99830416/232340446-2ddc9b90-d2ad-45ca-a42a-c6ec793a43ab.mp4

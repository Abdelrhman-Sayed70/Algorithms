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

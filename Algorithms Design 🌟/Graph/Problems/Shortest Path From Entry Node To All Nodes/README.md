# Shortest Path From Entry Node To All Nodes
## Problem Description
**Given entry node print the shortest path [edges] visited for each node in the graph. If there is no connection between the entry node and any other one print -1.<br>
Find the problem here. First task at [Shortest paths | CS Academy](https://csacademy.com/lesson/breadth_first_search)**

## 💭 Approach 
**BFS by nature get the shortest path from entry node to all other nodes**

# Code
```cpp
const int GraphMaxSize = 1e5 + 5;
map<int,bool>visited;
vector<int>path(GraphMaxSize, -1);
void BFS(int node1, vector<vector<int>>& graph) {
    queue<int>nextToVisit;
    path[node1] = 0;
    nextToVisit.push(node1);
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        visited[current] = 1;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (!visited[child]) {
                nextToVisit.push(child);
                visited[child] = 1;
                path[child] = path[current] + 1;
            }
        }
    }
}
int main() {
    int vertices, edges, entry; cin >> vertices >> edges >> entry;
    vector<vector<int>>graph(vertices + 1);
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        //graph[v].push_back(u); // for undirected graph
    }
    BFS(entry, graph);
    for (int i = 1; i <= vertices; i++) {
        cout << path[i] << " ";
    }
}
```
 

# Party
## [Party | Codeforces](https://codeforces.com/contest/116/problem/C)

## Approach 
**Draw some graphs with the problem constraints. We will notice that the answer is the max level number of graph**


## Code
```cpp
unordered_map<int, bool>visited;
int bfs(int node, map<int, vector<int>>& graph) {
    queue<int>nextToVisit;
    unordered_map<int,int>lvl;
    nextToVisit.push(node);
    lvl[node] = 1;
    int mx = 0;
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        visited[current] = 1;
        nextToVisit.pop();
        mx = max(mx, lvl[current]);
        for (auto child : graph[current]) {
            if (!visited[child])
                nextToVisit.push(child), visited[child] = 1, lvl[child] = lvl[current] + 1;
        }
    } 
    return mx;
}
int main() {
    int n; cin >> n; 
    map<int, vector<int>>graph;
    vector<int>entry;
    for (int i = 1; i <= n; i++) {
        int in; cin >> in;
        if (in != -1) {
            graph[in].push_back(i);
        }
        else {
            entry.push_back(i);
        }
    }
    int mx = -1;
    for (auto it : entry) {
        mx = max(mx, bfs(it, graph));
        visited.clear();
    }
    cout << mx; el;
}
```

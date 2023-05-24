# Rumor
## [Rumor | Codeforces](https://codeforces.com/contest/893/problem/C)

## Approach 
**Get the min cost of nodes for each component**
## Solution 
```cpp
unordered_map<int, bool>visited;
int bfs(int node, map<int, vector<int>>& graph, vector<int>& cost) {
    queue<int>nextToVisit;
    nextToVisit.push(node);
    int mn = 1e9 + 1;
    while (nextToVisit.size()) {
        int current = nextToVisit.front();
        mn = min(mn, cost[current]);
        visited[current] = 1;
        nextToVisit.pop();
        for (auto child : graph[current]) {
            if (!visited[child])
                nextToVisit.push(child), visited[child] = 1;
        }
    }
    return mn;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int>v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    map<int, vector<int>>graph;
    while (m--) {
        int a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    ll cost = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) { cost += bfs(i, graph, v); }
    }
    cout << cost;
}
```

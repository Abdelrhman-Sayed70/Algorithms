# Find whether path exist
### [Find whether path exist | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)


# Solution
```cpp
int dx[10] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[10] = { 0, 0, 1, -1, -1, 1, 1, -1 };
bool visited[505][505];
bool inMap(pair<int, int>point, int n, int m, int mapBase) {
    int i = point.first, j = point.second;
    if (mapBase) return (i > 0 and i <= n and j > 0 and j <= m);
    else return (i >= 0 and i < n and j >= 0 and j < m);
}
bool bfs(pair<int, int> entryPoint, pair<int,int>endPoint, vector<vector<int>>&graph, int n, int m) {
    queue<pair<int, int>>q;
    q.push(entryPoint);
    pair<int, int>point;
    while (q.size()) {
        point = q.front();
        if (point == endPoint) { return true; }
        visited[point.first][point.second] = 1;
        q.pop();
        // traverse 4 connected nodes of the current point [vertical & horizontal]
        for (int i = 0; i < 4; i++) {
            pair<int, int> currentPoint = { point.first + dx[i], point.second + dy[i] };
            if (inMap(currentPoint, n, m, 0) and !visited[currentPoint.first][currentPoint.second] and graph[currentPoint.first][currentPoint.second]!=0) {
                visited[currentPoint.first][currentPoint.second] = 1;
                q.push(currentPoint);
            }
        }
    }
    return false;
}

bool is_Possible(vector<vector<int>>& grid) 
{
    memset(visited, 0, sizeof(visited));
    int n = grid.size(), m = grid[0].size();
    pair<int, int> entryPoint, destination;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) { entryPoint = { i, j }; }
            else if (grid[i][j] == 2) { destination = { i,j }; }
        }
    } 
    bool found = bfs(entryPoint, destination, grid, n, m); 
    return found;
}
```

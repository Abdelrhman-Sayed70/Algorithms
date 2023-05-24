# Traversing in a 2D Grid
![image](https://user-images.githubusercontent.com/99830416/233385168-a2677c80-264f-4cad-985c-cbfe0ea4d1ce.png)

- Let’s take the above grid as an example, if you are standing on point (3,2) you can move to the following four points, (3,1), (3,3), (2,2), (4,2).
- So, if you are on point (i,j), you can move to (i - 1, j), (i + 1, j), (i, j + 1), (i, j - 1), but first you need to check if the point you are traversing to is in _**borders**_.

# Problems
### [Fire Again | CodeForces](https://codeforces.com/contest/35/problem/C)

# Traversal
```cpp
// first four points for vertical & horizontal moves, second four points for diagonal moves
int dx[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int dy[] = { 0, 0, 1, -1, -1, 1, 1, -1 };
bool visited[2005][2005];
bool inMap(pair<int,int>point, int n, int m, int mapBase) {
    int i = point.first, j = point.second;
    if (mapBase) return (i > 0 and i <= n and j > 0 and j <= m); 
    else return (i >= 0 and i < n and j >= 0 and j < m);
}
void bfs(vector<pair<int, int>>&entryPoints, int n, int m) {
    queue<pair<int, int>>q;
    for (int i = 0; i < entryPoints.size(); i++) { q.push(entryPoints[i]); }
    pair<int, int>point;
    while (q.size()) {
        point = q.front(); 
        visited[point.first][point.second] = 1;
        q.pop();
        // traverse 4 connected nodes of the current point [vertical & horizontal]
        for (int i = 0; i < 4; i++) {
            pair<int, int> currentPoint = { point.first + dx[i], point.second + dy[i]};
            if (inMap(currentPoint, n, m, 1) and !visited[currentPoint.first][currentPoint.second]) {
                visited[currentPoint.first][currentPoint.second] = 1;
                q.push(currentPoint);
            }
        }
    }
    // print last traversed node 
    cout << point.first << " " << point.second << "\n";
}
int main() {
    int n, m, numOfEntryPoints;
    cin >> n >> m >> numOfEntryPoints;
    vector<pair<int, int>>entryPoints;
    
    /*
    -> in case u have only one entry point at (1, 1) <-
    entryPoints.push_back({ 1,1 });
    visited[1][1] = 1;
    */

    while (numOfEntryPoints--) {
        int a, b;
        cin >> a >> b; // one based points
        entryPoints.push_back({ a,b });
        visited[a][b] = 1;
    }
    bfs(entryPoints, n, m);
}
```

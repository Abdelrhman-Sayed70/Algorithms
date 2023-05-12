# Fire Again
## [Fire Again | Codeforces](https://codeforces.com/problemset/problem/35/C)
## Code
```cpp
int dx[] = { 1, -1, 0 ,0 };
int dy[] = { 0 , 0 , 1, -1 };
vector<pair<int, int>>v;
bool burnt[2005][2005];
bool inMap(pair<int, int>pr, int n, int m) {
    int a = pr.first, b = pr.second;
    return (a > 0 and a <= n and b > 0 and b <= m);
}
void bfs(vector<pair<int,int>>&v, int n, int m) {
    queue<pair<int, int>>q;
    for (int i = 0; i < v.size(); i++) { q.push(v[i]); }
    pair<int, int>point;
    while (q.size()) {
        point = q.front();
        burnt[point.first][point.second] = 1;
        q.pop();
        // traverse of childs of current point
        for (int i = 0; i < 4; i++) {
            pair<int, int>p = { point.first + dx[i], point.second + dy[i] };
            if (inMap(p, n, m) and !burnt[p.first][p.second]) {
                burnt[p.first][p.second] = 1;
                q.push(p);
            }
        }
    }
    cout << point.first << " " << point.second;
}
int main() {
    int n, m, k;  
    cin >> n >> m >> k; 
    while (k--) {
        int a, b;
        cin >> a >> b; 
        // starting points of burn
        v.push_back({ a,b });
        burnt[a][b] = 1;
    }
    bfs(v, n, m);
}
```

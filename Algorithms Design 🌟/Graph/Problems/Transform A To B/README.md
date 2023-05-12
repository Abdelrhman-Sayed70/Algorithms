# Transform A To B
## [Transform A To B | Codeforces](https://codeforces.com/contest/727/problem/A)

## Graph Approach
- Generate your graph using BFS and if you find b, stop generation and traverse all parents of b.

## Graph Solution
```cpp
void bfs(ll a, int b) {
    queue<int>nextToVisit;
    map<int, int>parent;
    nextToVisit.push(a);
    parent[a] = -1;
    bool valid = false;
    while (nextToVisit.size()) {
        ll current = nextToVisit.front();
        nextToVisit.pop();
        ll val = current * 2;
        if (val == b) { valid = true;  parent[val] = current;  break; }
        if (val < b) { nextToVisit.push(val); parent[val] = current; }
        val = current * 10 + 1;
        if (val == b) { valid = true; parent[val] = current; break; }
        if (val < b) { nextToVisit.push(val); parent[val] = current;}   
    }
    if (!valid) { cout << "NO\n"; return; }
    vector<int>path;
    while (b != -1) {
        path.push_back(b);
        b = parent[b];
    }
    reverse(path.begin(), path.end());
    cout << "YES\n" << path.size() << "\n";
    for (auto it : path) { cout << it << " "; }
}
int main() {
    ll a, b; cin >> a >> b; 
    bfs(a, b);
}
```

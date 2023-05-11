# 23 out of 5
- ### [23 out of 5 | VJudge](https://vjudge.net/contest/485599#problem/A)
- ### [23 out of 5 | UVA](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1285)

## Solution 
```cpp
bool ok = false;
void solve(int i, int cur, vector<int>& v) {
    if (i == 5) {
        if (cur == 23) { ok = true;  }
        return;
    }
    solve(i + 1, cur + v[i], v);
    solve(i + 1, cur - v[i], v);
    solve(i + 1, cur * v[i], v);
}
void doIt() {
    while (true) {
        ok = false;
        vector<int>v(5); 
        bool fail = true;
        for (auto& it : v) {
            cin >> it; 
            if (it != 0) { fail = false; }
        }
        if (fail) { break; }
        sort(all(v));
        do {
            solve(1, v[0], v);
            if (ok) { cout << "Possible\n"; break; }
        } while (next_permutation(all(v)));

        if (!ok) cout << "Impossible\n";
    }
}
```

## Solution [recursive function return bool]
```cpp
bool solve(int i, int cur, vector<int>& v) {
    if (i == 5) {
        return cur == 23; 
    }
    bool a = solve(i + 1, cur + v[i], v);
    bool b = solve(i + 1, cur * v[i], v);
    bool c = solve(i + 1, cur - v[i], v);
    return a or b or c; 
}
void doIt() {
    while (true) {
        vector<int>v(5); 
        bool fail = true;
        for (auto& it : v) {
            cin >> it; 
            if (it != 0) { fail = false; }
        }
        if (fail) { break; }
        sort(all(v));
        bool ok = solve(1, v[0], v);
        do {
            ok = solve(1, v[0], v);
            if (ok) { cout << "Possible\n"; break; }
        } while (next_permutation(all(v))); 
        if (!ok) { cout << "Impossible\n"; }
    }
}
```

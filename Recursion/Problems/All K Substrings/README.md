```cpp
vector<char>v;
int k;
void rec(string s) {
    if (s.size() == k) {
        cout << s << "\n";
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        rec(s+v[i]);
    }
}
int main() {
    int n; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch; v.push_back(ch);
    }
    rec("");
}
```
## Notes
- we update string in the `function call` `rec(s + ch)` not glopally this means that each recursion call has its string version

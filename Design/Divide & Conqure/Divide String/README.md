# Divide String 
Given string of length n (power of 2) devide string into 2 equal sub-string and print them then repeat until the size = 0 

## Code
```cpp
void solve(string s, int start, int end){
    if (start == end) {   return; }
    int mid = (start + end) / 2;
    solve(s, start, mid);
    solve(s, mid + 1, end); 
    cout << s.substr(start, mid - start + 1); el;
    cout << s.substr(mid + 1, end - mid); el;
}
int main() {
    string s; cin >> s;
    solve(s, 0, s.size() - 1);
}
```

# Largest Element Position 

# Code
```cpp
int maxPos(vector<int>v, int start, int end) {
    if (start == end) { return start; } 
    int mid = (start + end) / 2;
    int left_max_pos = maxPos(v, start, mid);
    int right_max_pos = maxPos(v, mid + 1, end);
    return (v[left_max_pos] > v[right_max_pos]) ? left_max_pos : right_max_pos;
}
int main() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; } 
    cout << maxPos(v, 0, n - 1);
}
```

# Complexity 
- T(n) = 2T(n/2) + O(1)
- Solve using Master `O(n)`

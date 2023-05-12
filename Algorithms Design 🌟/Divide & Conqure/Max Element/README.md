# Max Element 
Get the max element in the array 

## Code
```cpp
int getMax(vector<int>v, int start, int end) {
    if (start == end) { return v[start]; }
    int mid = (start + end) / 2;
    int lef_max = getMax(v, start, mid);
    int right_max = getMax(v, mid + 1, end);
    return max(lef_max, right_max);
}
int main() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    cout << getMax(v, 0, n - 1);
}
```
- `Divide` Divide the array into 2 halves (calc mid) 
- `Conquer` Solve each half in the same manner 
- `Conmbine` Return max of each branch

## Complexity 
- T(n) = 2.T(n/2) + O(1)
- Solve using Master `O(n)` 

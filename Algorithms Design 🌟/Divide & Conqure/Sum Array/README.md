# Sum array 
Sum all array elements using Divide and Conquer approach 

# Code
```cpp
int solve(vector<int>v, int start, int end) {
    if (start == end) { return v[start]; }
    int mid = (start + end) / 2;
    int left_sum = solve(v, start, mid);
    int right_sum = solve(v, mid + 1, end);
    return left_sum + right_sum;
}
int main() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    cout << solve(v, 0, n - 1);
}
```
- `Divide` Divide the array into 2 halves (calc mid)
- `Conquer` Solve each half in the same manner
- `Combine` Sum up the resuslt from left and right branch
# Complexity 
- T(n) = 2.T(n/2) + O(1)
- Solve using Master `O(n)` 

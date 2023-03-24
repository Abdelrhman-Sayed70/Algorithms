# Min Max 
# Problem statement 
Given arr with size n get its min and max alements

## Brute-Force (Naïve) approach
- Sort the array and get the first and last element 
- Time complexity: O(N.Log(N)) `Can we do better?`

## Divide and conquer approach 

### `Approach`
- Get max, min of each branch
### `Base Case` 
- Current branch has 1 or 2 values
### `Transition`
- Devide array into 2 sub-arrayes
## Code
```cpp
pair<int, int> getMaxMin(vector<int>v, int start, int end) {
    if (start == end) { return { v[start], v[start] }; }
    if (start + 1 == end) { return { max(v[start],v[end]), min(v[start],v[end]) }; }
    int mid = (start + end) / 2;
    pair<int, int>left = getMaxMin(v, start, mid);
    pair<int, int>right = getMaxMin(v, mid + 1, end);
    return { max(left.first, right.first), min(left.second, right.second) };
}
int main() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    pair<int, int>sol = getMaxMin(v, 0, n - 1);
    cout << "mx: " << sol.first << "\nmn: " << sol.second;
}
```
- `Divide` Divide problem into 2 sub-problems
- `Conquer` Solve each sub-problem using the same manner
- `Combine` Return min max of each branch

## Time Complexity 
- T(n) = 2.T(n/2) + c
- Solve using Master `O(n)`

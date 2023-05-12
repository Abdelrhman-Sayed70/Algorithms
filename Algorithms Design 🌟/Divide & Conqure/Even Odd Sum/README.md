# Even Odd Sum 
Given an array with a set of integer numbers, you have to determine if the sum of all the numbers is odd (return true) or even (return false) 

## Approach
- Even + Even -> return Even (False)
- Odd + Odd    -> return Even (False)
- Even + Odd  -> return Odd   (True)


## Code
```cpp
bool solve(vector<int>v, int start, int end) {
    if (start == end) {
        return v[start] % 2;
    }
    int mid = (start + end) / 2;
    bool br1 = solve(v, start, mid);
    bool br2 = solve(v, mid + 1, end);
    return (br1 != br2);
}
int main() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    cout << (solve(v, 0, n-1)? "Odd sum":"Even Sum");
}
```
`Why to solve D&C` to avoid overflow when sumup all elements

## Complexity 
- T(n) = 2T(n/2) + O(1)
- Solve using Master `O(n)`

# Element Equal Index 

## Problem statement 
Suppose you are given an increasing sequence of n distinct integers in an array 
A[1..n]. Design an efficient algorithm to determine whether there exists an index i 
such that A[i] = i.

## Test cases
- n = 4 <br>
  1 2 3 4 <br>
  out: YES <br>

- n = 3 <br>
  -1 0 3 <br>
  out: YES

- n = 3 <br>
  2 3 4 <br>
  out: NO
  
## Idea Of Algorithm
 
The algorithm starts from the middle of the array A and check if we have found a match (i.e. A[mid] = mid).
If not, we check to see if what we've got is greater or lesser than the required value.
If it is greater (i.e. A[mid] > mid), then we can confidently ignore all the values greater than and including the midpoint.
If it is smaller (i.e. A[mid] < mid), then we can ignore all the values smaller than and including the midpoint.
This goes on until we either and a match or when the low point is greater than
 

## Code
```cpp
bool solve(vector<int>v, int start, int end) {
    if (start > end) { return false; }
    int mid = (start + end) / 2;
    if (v[mid] == mid + 1) { return 1; }
    if (v[mid] > mid + 1) { return(v, start, mid - 1); }
    else { return(v, mid + 1, end); }
}
int main() {
    int n; cin >> n; 
    vector<int>v(n); 
    for (auto& it : v) { cin >> it; }
    cout << (solve(v, 0, n - 1) ? "YES" : "NO");
}
```
- `Divide` Check the middle against A[mid]
- `Conquer` Solve the sub-array recursively
- `Combine` Trivial `Limitation`
## Complexity 
- T(n) = T(n/2) + O(1) 
- Solve using Master `O(Log(n))`

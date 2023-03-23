# Binary search
![R](https://user-images.githubusercontent.com/99830416/227246259-6e5115aa-a1ba-48c4-8e40-fdc86bd7b1ba.gif)
# Algorithm 
**1- Divide step: Compare the value i search for with the middle, divide array into 2 subarryes, and go to the propper subarray**  <br> 
**2- Conqure: solve the sub-array with the same manner** <br> 
**3- Combine: Trivial [no building cubes]** <br> 

# Code
```cpp
bool binarySearch(vector<int>v, int start, int end, int val) {
    if (start > end) { return false; }
    int mid = (start + end) / 2;
    if (v[mid] == val) { return true; }
    else if (v[mid] > val) { return binarySearch(v, start, mid - 1, val); }
    else if (v[mid] < val) { return binarySearch(v, mid + 1, end, val); }
}
int main() {
    int n, val; cin >> n >> val; 
    vector<int>v(n);
    for (auto& it : v) { cin >> it; }
    if (binarySearch(v, 0, n - 1, val)) { cout << "Found"; }
    else { cout << "Not found"; }
}
```

# Complexity 
- **T(n) = T(Divide & Combine) + T(Conquer)**
- **T(n) = Θ(1) + T(n/2)**   
- **solve using `Master method` (Case #2) `Log(n)`**

# Merge Sort

# Approach 
`Divide and Conquer` approach 
- `Divide` Split array into 2 halves
- `Conquer` Recursively solve 2 sub-arrayes
- `Combine` Merge tow sorted aub-arrays of each node

# Code
```cpp
void merge(vector<int>& v, int left, int right, int mid)
{
    // copy the right array in array R and left array to L
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int left_pointer = left, right_pointer2 = mid + 1;
    vector<int>L(n1 + 1), R(n2 + 1);
    for (int i = 0; i < n1; i++) {
        L[i] = v[left_pointer];
        left_pointer++;
    }
    for (int i = 0; i < n2; i++) {
        R[i] = v[right_pointer2];
        right_pointer2++;
    }
    L[n1] = INT_MAX; R[n2] = INT_MAX;
    // Update the original array
    int ptr1 = 0, ptr2 = 0;
    for (int i = left; i <= right; i++) {
        if (L[ptr1] <= R[ptr2]) {
            v[i] = L[ptr1];
            ptr1++;
        }
        else {
            v[i] = R[ptr2];
            ptr2++;
        }
    }
}
void mergeSort(vector<int>&v, int left, int right)
{
    if (left >= right) { return; }
    int mid = (left + right) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid + 1, right);
    merge(v, left, right, mid);
}
```
# Complexity 

- T(n) = 2T(n/2) + O(n)
- Solve using Master `O(N.Log(N))` **In all cases.**

# Advantages 
- O(N.Log(n)) in all cases
- Can be parallized
- Work well in case of small RAM
# Disadvantages
- Requires extra space `array of size n` cause of **Out Place** -> sort in another array. `Can we do better?` <br>
  YES, we can use extra array of size n/2 not n. We will move the first sub-array into this array and update the original one.🤝🏻

  

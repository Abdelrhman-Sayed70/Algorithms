# All K Subarrays

# Problem statement
Given array `a` of size `n` and number `k` find all subarrays can be generated from array a of lenght k

# Solution
```cpp
vector<int>v;
int k;
void rec(vector<int>vec) {
    if (vec.size() == k) {
        for (auto it : vec) {
            cout << it << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        vec.push_back(v[i]);
        rec(vec);
        vec.pop_back();
    }
}
int main() {
    int n; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int in; cin >> in; v.push_back(in);
    }
    rec({});
}
```

## Notes
- Here we update vector glopally before the recursive call so the vector will be seen over all function calls but we need each call has its version so after adding element in vector, recurse and reach the base case of the current call we should `pop` this element

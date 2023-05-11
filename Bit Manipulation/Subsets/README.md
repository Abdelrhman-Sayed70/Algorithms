# Subsets
### [Subsets | Leetcode](https://leetcode.com/problems/subsets/)

## Solution 
```cpp
bool getBit(long long n, int index) {
    return ((n >> index) & 1);
}
vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>>ans;
    for(int i=0; i < (1<<n) ;i++){
        vector<int>v;
        for(int j=0 ;j < n;j++){
            if (getBit(i, j))
            {
                v.push_back(nums[j]);
            }
        }
        ans.push_back(v);
    }
    return ans;
}
```

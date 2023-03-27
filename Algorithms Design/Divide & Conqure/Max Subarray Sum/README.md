# [Max Subarray Sum | LeetCode](https://leetcode.com/problems/maximum-subarray/description/)

# `Approach` 
### `Divide`
- Divide array into 2 subarrayes

### `Conquer` 
- Recursively calculate max. sequence sum in each half
### `Combine`
- Find maximum subarray sum from left (Ml), right (Mr) & subarray across mid point (Mc) `How to find Mc` <br>
- How to find Mc?
  - Find max sum starting from mid point and ending at some point on left of mid <br>
  - Find max sum starting from mid+1 & ending with some point on right of mid+1 <br>
  - Add the two sums together to form Mc <br>

# `Code` 
```cpp
struct Subarray {
    int start;
    int end;
    int maxSum;
};
Subarray maxCrossSum(vector<int>&v, int start, int end, int mid) {
    int leftSum = INT_MIN, rightSum = INT_MIN; 
    int leftIndex = -1, rightIndex = -1;
    int sum = 0;
    for (int i = mid; i >= start; i--) {
        sum += v[i]; 
        if (sum > leftSum) {
            leftSum = sum;
            leftIndex = i;
        }
    }
    sum = 0; 
    for (int i = mid + 1; i <= end; i++) {
        sum += v[i];
        if (sum > rightSum) {
            rightSum = sum;
            rightIndex = i;
        }
    }
    return { leftIndex, rightIndex, leftSum + rightSum };
}
Subarray maxSubArrSum(vector<int>&v, int start, int end) {
    if (start == end) { return { start, end, v[start] }; }
    int mid = (start + end) / 2;
    Subarray leftSub = maxSubArrSum(v, start, mid);
    Subarray rightSub = maxSubArrSum(v, mid + 1, end);
    Subarray crossSub = maxCrossSum(v, start, end, mid);
    if (leftSub.maxSum > rightSub.maxSum and leftSub.maxSum > crossSub.maxSum) { return leftSub; }
    else if (rightSub.maxSum > leftSub.maxSum and rightSub.maxSum > crossSub.maxSum) { return rightSub; }
    else { return crossSub; }
}
int main() {
    int n;  cin >> n;
    vector<int>v(n);
    for (auto& it : v) { cin >> it; } 
    Subarray sub = maxSubArrSum(v, 0, n - 1);
    cout << sub.start << " " << sub.end; el;
    cout << sub.maxSum;
}
```
# Complexity 
- T(n) = 2.T(n/2) + O(n). Solve using Master `O(n.Log(n)`

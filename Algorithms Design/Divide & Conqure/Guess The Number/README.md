# Guess The Number 
### [Guess Number Higher or Lower | LeetCode](https://leetcode.com/problems/guess-number-higher-or-lower/)

## Problem Statement 
Your friend guesses an integer between A and B: You can ask questions like is the 
number less than 100? He will give YES NO answers. How many questions can your 
friend force you to ask, if you are a smart person? `If b2a 😆`


## Code
```cpp
int solve(int start, int end, int val, int steps) {
    // it will not reach this case
    if (start > end) { return -1;  }
    int mid = (start + end) / 2;
    if (mid == val) { return steps; }
    if (mid > val) { return solve(start, mid - 1, val, steps + 1); }
    else { return solve(mid+1, end, val, steps + 1); }
}
void do_it() {
    int a, b, secret_num; 
    cin >> a >> b >> secret_num; 
    cout << solve(a, b, secret_num, 1);
}

```

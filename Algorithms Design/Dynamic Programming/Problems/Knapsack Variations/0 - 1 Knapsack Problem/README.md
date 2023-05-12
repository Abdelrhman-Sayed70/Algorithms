# 0 - 1 Knapsack Problem
### [0 - 1 Knapsack Problem | GeeksForGeeks](https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article)

## dp Solution [recursive]
```cpp
int knapsack(int i, int remain,int weight[], int value[],int n, vector<vector<int>>& dp) {
    if (i == n) { return 0; }

    if (dp[i][remain] != -1) { return dp[i][remain]; }

    int take = -1;
    if (remain - weight[i] >= 0)
        take = value[i] + knapsack(i + 1, remain - weight[i], weight, value, n, dp);

    int leave = knapsack(i + 1, remain, weight, value, n, dp);

    dp[i][remain] = max(take, leave);
    return dp[i][remain];
}
int knapSack(int W, int wt[], int val[], int n) 
{  
    vector<vector<int>>dp(n, vector<int>(W + 1, -1));
    int ans = knapsack(0, W, wt, val, n, dp);
    return ans;
}
```

## dp Solution [Iterative]

# Knapsack Items
## [Knapsack Items | Codeforces](https://codeforces.com/gym/389971/problem/B)


## Solution
```cpp
vector<int>takenItems;
ll knapsack(int i, int remain, vector<pair<int, ll>>& items, vector<vector<ll>>& dp) {
    if (i == items.size()) { return 0; }

    if (dp[i][remain] != -1) { return dp[i][remain]; }

    ll take = -1;
    if (remain - items[i].first >= 0)
        take = items[i].second + knapsack(i + 1, remain - items[i].first, items, dp);

    ll leave = knapsack(i + 1, remain, items, dp);

    dp[i][remain] = max(take, leave);
    return dp[i][remain];
}
void build(int i, int remain, vector<pair<int, ll>>& items, vector<vector<ll>>& dp) {
    if (i == items.size()) { return; }

    ll dpVal = dp[i][remain];

    ll take = items[i].second + knapsack(i + 1, remain - items[i].first, items, dp);
    if (dpVal == take) {
        takenItems.push_back(i);
        build(i + 1, remain - items[i].first, items, dp);
    }
    else {
        //ll leave = knapsack(i + 1, remain, items, dp);
        build(i + 1, remain, items, dp);
    }
}
void doIt() {
    int n, maxW;
    cin >> n >> maxW;
    vector<pair<int, ll>>items(n);
    vector<vector<ll>>dp(n, vector<ll>(maxW + 1, -1));
    for (int i = 0; i < n; i++) {
        cin >> items[i].first >> items[i].second;
    }
    cout << "Max Profit: " << knapsack(0, maxW, items, dp) << "\n";
    build(0, maxW, items, dp);
    cout << "Taken items: \n";
    for (auto it : takenItems) {
        cout << "item # " << it + 1 << " with Wieght: " << items[it].first << "\n";
    }
    cout << "\n";
    takenItems.clear();
}
```
## Testcases
### Case 1
```
input:
3 8
3 30
4 50
5 60

output:
Max Profit: 90
Taken items:
item # 1 with Wieght: 3
item # 3 with Wieght: 5
```

### Case 2
```
input:
6 15
6 5
5 6
6 4
6 6
3 5
7 2

output:
Max Profit: 17
Taken items:
item # 2 with Wieght: 5
item # 4 with Wieght: 6
item # 5 with Wieght: 3
```


# Unbounded knapsack [assignment soln]
```cpp
using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using System.Security.Cryptography;
using System.Security.Policy;
using System.Text;
using System.Threading.Tasks;

namespace Problem
{
    // *****************************************
    // DON'T CHANGE CLASS OR FUNCTION NAME
    // YOU CAN ADD FUNCTIONS IF YOU NEED TO
    // *****************************************
    public static class AliBabaInParadise
    {
        #region YOUR CODE IS HERE
        #region FUNCTION#1: Calculate the Value
        //Your Code is Here:
        //==================
        /// <summary>
        /// Given the Camels maximum load and N items, each with its weight and profit 
        /// Calculate the max total profit that can be carried within the given camels' load
        /// </summary>
        /// <param name="camelsLoad">max load that can be carried by camels</param>
        /// <param name="itemsCount">number of items</param>
        /// <param name="weights">weight of each item</param>
        /// <param name="profits">profit of each item</param>
        /// <returns>Max total profit</returns>

        // Dictionary that held taken items and number of instance of each one
        static Dictionary<int, int> mp = new Dictionary<int, int>();

        // Knapsack function that get the best profit
        static int Knapsack(int i, int remain, int[] weight, int[] value, int n, int[,] dp)
        {
            if (i == n) { return 0; }

            if (dp[i, remain] != -1) { return dp[i, remain]; } // retrieve the answer from dp

            int take = -1;
            if (remain >= weight[i])
                take = value[i] + Knapsack(i, remain - weight[i], weight, value, n, dp);

            int leave = Knapsack(i + 1, remain, weight, value, n, dp);

            dp[i, remain] = Math.Max(take, leave); // save the answer in dp
            return dp[i, remain];
        }


        static void Build(int i, int remain, int[] weight, int[] value, int n, int[,] dp)
        {
            if (i == n || remain == 0) { return; }

            int dpVal = dp[i, remain];

            // take
            int take = -1;
            if (remain >= weight[i])
                take = value[i] + Knapsack(i, remain - weight[i], weight, value, n, dp);

            // check if the current dp store the taken value
            if (dpVal == take)
            {
                //System.Console.WriteLine(i + 1);
                if (mp.ContainsKey(i + 1)) { mp[i + 1]++; }
                else { mp.Add(i + 1, 1); }

                Build(i, remain - weight[i], weight, value, n, dp);
                return;
            }

            // leave
            Build(i + 1, remain, weight, value, n, dp);
            return;
        }

        static public int SolveValue(int camelsLoad, int itemsCount, int[] weights, int[] profits)
        {
            // Reset map
            mp.Clear();

            // Create dp and initialize it with -1
            int[,] dp = new int[itemsCount, camelsLoad + 1];
            for (int i = 0; i < itemsCount; i++)
            {
                for (int j = 0; j <= camelsLoad; j++)
                {
                    dp[i, j] = -1;
                }
            }

            // Get the best profit
            int ans = Knapsack(0, camelsLoad, weights, profits, itemsCount,  dp);
            
            // Construct Solution
            Build(0, camelsLoad, weights, profits, itemsCount, dp);

            // Return max profit
            return ans;
        }
        #endregion

        #region FUNCTION#2: Construct the Solution
        //Your Code is Here:
        //==================
        /// <returns>Tuple array of the selected items to get MAX profit (stored in Tuple.Item1) together with the number of instances taken from each item (stored in Tuple.Item2)
        /// OR NULL if no items can be selected</returns>
        static public Tuple<int, int>[] ConstructSolution(int camelsLoad, int itemsCount, int[] weights, int[] profits)
        {
            // Convert map into tuble array
            Tuple<int, int>[] tupleArray = mp.Select(kvp => Tuple.Create(kvp.Key, kvp.Value)).ToArray();

            return tupleArray;
        }
        #endregion

        #endregion
    }
}
```

# 1 2 3 Stairs
![image](https://github.com/Abdelrhman-Sayed70/Algorithms/assets/99830416/4eacf3e1-7989-4e0a-8be5-f8d00e5d7a28)

## Recursive Solution
```cpp
int solve(int n) {
    if (n == 0) { return 1; }
    if (n < 0) { return 0; }
    
    int a = solve(n - 1); 
    int b = solve(n - 2); 
    int c = solve(n - 3); 
    
    return a + b + c;
}
void doIt() {
    int n; 
    cin >> n; 
    cout << solve(n);
}
```
## dp Solution 
```cpp
int solve(int n, vector<int>&dp) {
    if (n == 0) { return 1; }
    if (n < 0) { return 0; }

    if (dp[n] != -1) { return dp[n]; }

    int a = solve(n - 1, dp); 
    int b = solve(n - 2, dp); 
    int c = solve(n - 3, dp); 

    dp[n] = a + b + c;  
    return dp[n];
}
void doIt() {
    int n; 
    cin >> n; 
    vector<int>dp(n + 1, -1); 
    cout << solve(n, dp);
}
```
## Iterative Solution 
```cpp
int main() {
    int n; 
    cin >> n; 
    vector<int>wayes(n + 1);
    wayes[0] = wayes[1] = 1;
    wayes[2] = 2;
    for (int i = 3; i <= n; i++) { wayes[i] = wayes[i - 1] + wayes[i - 2] + wayes[i - 3]; }
    cout << wayes[n];
}
```

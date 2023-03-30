# Scheduling Activities
## [Scheduling Activities | CSES Problem set](https://cses.fi/problemset/task/1629)
## [Scheduling Activities | Codeforces](https://codeforces.com/gym/102961/problem/F)
## [Tutorial | ARS LONGA VITA BREVIS](https://www.youtube.com/watch?v=m5hGKMi-NP8&t=177s)

## Naïve Approach 
- Try all combinations `Take or Leave` Approach
- Coded using recursion to get all possiblities
- O(2^N)

## Greedy Approach | Efficient
- Sort by `Finish Time`
- Iterate over the sorted array and check if the current `start time` >= `last finish time` then take this activity and update the last finish time by the finish time of this activity. Else continue 


 
## Code
```cpp
int main() {
    int n; cin >> n; 
    vector<pair<int, int>>v(n);
    for (auto& it : v) { cin >> it.second >> it.first; }
    // it.first = end time, it.second = start time 
    sort(v.begin(), v.end());
    int last_finish_time = 0;
    int cnt = 0;
    for (auto it : v) {
        if (it.second >= last_finish_time) { cnt++; last_finish_time = it.first; }
    }
    cout << cnt;
}
```
# Complexity 
- `O(n.Log(n))`

# Variations Of This Problem




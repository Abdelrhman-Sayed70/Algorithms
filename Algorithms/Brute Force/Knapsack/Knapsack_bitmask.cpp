#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define ll long long
#define el cout << "\n" 
#define endl "\n"
#define yes cout <<"YES\n" 
#define no cout << "NO\n"
#define all(v) v.begin(),v.end()
#define out(v) for(auto it : v) { cout << it << " ";}
const double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
void files() {
#pragma warning(disable : 4996).
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//*********************
int getBit(int n, int index) {
    return ((n >> index) & 1);
}
void you_can_do_it() {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>>v(n); // weight, value
    for (int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    // bitmask from 0 to (2^n)-1
    int mx = 0;
    for (int i = 0; i < 1 << n; i++) {
        int curval = 0, curweight = 0;
        for (int j = 0; j < n; j++) {
            if (getBit(i, j)) {
                curweight += v[j].first;
                if (curweight <= w) curval += v[j].second;
            }
        }
        mx = max(mx, curval);
    }
    cout << mx;
    el;
}
//*********************             
int main() {
    //files();
    fastIO;
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        you_can_do_it();
    }
}
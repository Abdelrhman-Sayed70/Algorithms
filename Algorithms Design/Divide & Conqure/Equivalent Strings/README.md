# [Equivalent Strings | Codeforces](https://codeforces.com/contest/559/problem/B)

# Approach 
- Get the smallest Equivalent string for 2 strings if they are equal so they are `Equivalent` strings.
- How to get the smallest Equivalent string for the current string? <br>
`1- Divide string to 2 equal size string (it can be done only if the string size is even)` <br>
`2- Conquer each sub-string in the same manner till the string size became odd` <br>
`3- Now we have 2 branches with odd size string how to combine?` <br>
`4- return min(a+b, b+a)`<br>
`That will return the smalles Equivalent string of my string`

- 

# Code
```cpp
string solve(string s) {
    if (s.size() & 1) { return s; } //base case 
    string a = solve(s.substr(0, s.size() / 2)); 
    string b = solve(s.substr(s.size() / 2));
    return (min(a + b, b + a));
}
int main() {
    string a, b; 
    cin >> a >> b;  
    solve(a) == solve(b) ? yes : no;
}
```

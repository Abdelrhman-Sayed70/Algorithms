# [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

# PRE TEST 
`Create function that generate all possible Parentheses of length n * 2`
`Build Tree to get all possible answers`
```cpp
int n;
void generate(string s, int n) {
    if (s.size() == n*2) { cout << s << "\n"; return; }
    generate(s + '(', n);
    generate(s + ')', n);
}
int main() {
    cin >> n; 
    generate("", n);
}
```
# Hint
- If we have `n = 3` so string size = 3 * 2 = 6, `L = 3`, `R = 3` 
- I can put any L while L > 0 
- At any call `L` should be greater than or equal `R` to create valid Parentheses else the recursion must stop 

# Solution
```cpp
int n;
void generate(string s, int l , int r) {
    if (s.size() == n*2) { cout << s << "\n"; return; }
    
    if (l > 0) 
        generate(s + '(', l - 1, r);
    
    if (r > l)
        generate(s + ')', l, r - 1);
}
int main() {
    cin >> n; 
    generate("", n, n);
}
```

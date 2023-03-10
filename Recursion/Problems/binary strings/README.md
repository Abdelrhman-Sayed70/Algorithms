# Binary strings
# Problem statement
Given a number `n` find all binary sequances of length `2n` such that the sum of first n bits equals to the sum of second n bits

# Test case 
- input: n = 1
- output: 00, 11

# Solution

```cpp
int n;
void rec(string s, int sum1, int sum2) {
    // we need to create 2 branches 0, 1
    if (s.size() == 2 * n) {
        if (sum1 == sum2) { cout << s << "\n"; }
        return;
    }
    rec(s + '0', sum1, sum2);
    if (s.size() < n) {
        rec(s + '1', sum1 + 1, sum2);
    }
    else {
        rec(s + '1', sum1, sum2 + 1);
    }
}
int main() {
    cin >> n; 
    rec ("", 0, 0);
}
```

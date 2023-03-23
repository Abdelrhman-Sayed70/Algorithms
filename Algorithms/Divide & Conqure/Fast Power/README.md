# Fast Power 

## Problem statement 
Given a number n and base b, get n power b 

## Brute-Force (Naïve) approach
- Identify ans = 1, loop from 1 to b and multiply ans with n
- Complexity: O(n) `Can we de better?`

## Divide & Conquer approach 
### `Approach`

- In case of even power: n<sup>b</sup> = n<sup>b/2</sup> * n<sup>b/2</sup> 
- In case of odd power: n<sup>b</sup> = n<sup>b/2</sup> * n<sup>b/2</sup> * n 
- So we can try to solve only one of n<sup>b/2</sup> and multiply the result by its self [even power] or its self * base [odd power]
 

### `Base case`
- The power reach 1 so return n

### `Transition` 
- Get the answer of n power power/2

## Code 
```cpp
int fastPower(int n, int base) {
    if (base == 0) { return 1; }
    if (base == 1) { return n; } 
    int val = fastPower(n, base / 2);
    if (!(base & 1)) { return val * val;}
    else { return val * val * n; }
}
int main() {
    int n, base; cin >> n >> base;
    cout << fastPower(n, base);
}
````
- `Divide` Trivial (Divide N over 2).
- `Conquer` Recursively solve 1 part only with N/2.
- `Combine` Mul. the solution of sub-problem by its self (and by base in case of odd power)

## Complexity 
- T(N) = T(N/2) + O(1)
- Solve using Master `O(Log(n))`

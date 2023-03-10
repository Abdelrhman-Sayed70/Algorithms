# Recursion 
# What is Recursion
- Process in which function calls its self directly or indirectly. This function called `recursive function` 

# Recursion Types 
- Direct recurion 
  ```cpp
  void directrec(){
      // code
      directrec()
      // code
  }
  ```

- Indirect recursion
  ```cpp
  void indirectrec1(){
      indirectrec2()
  }
  void indirectrec2(){
      indirectrec1()
  }
  ```
# Recursion Components 
- #### Return type of function (void, int, ..)
- #### Base case [Stopping condition] 
- #### Transition [Statement]. `Each statement create branch of tree`
- #### `Tree` each node has n branches [n number of transitions] and the leaves are base case condition. Use [Recursion Tree Visualizer](https://recursion.vercel.app/)

# Simple Example 
### `sum numbers from 1 to n` 
  ```cpp
  int rec(int n){
    if (n == 1) { return n;}
    return n + rec(n-1);
  }
  int main(){
    int n; cin >> n;
    cout << rec(3);
  }
  ```

### `Fibonacci`
```cpp
int fib(int n) {
    if (n < 2) { return n; }
    return fib(n - 1) + fib(n - 2);
}
int main(){
    int n; cin >> n;
    cout << fib(n);
}
```
![image](https://user-images.githubusercontent.com/99830416/224443471-691baea7-621f-456f-b46e-eb4725f5f7cc.png)

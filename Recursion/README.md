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

# How to think Recursively ? 
### - `Build Tree`. Tree that get all possible answers and filter your answers
### - `Bulding Cubes`. Build the base cube [Base case] and compose the rest of cubes to get the final formed cube. 
### - `Take or Leave`
# Where to solve 
- ### [Assuit Sheet [Basic]](https://codeforces.com/group/MWSDmqGsZm/contest/223339)
- ### [ProgVar.Fun](https://progvar.fun/problemsets/recursion)
- ### [Hacker Rank](https://www.hackerrank.com/domains/algorithms?filters%5Bsubdomains%5D%5B%5D=recursion)
- ### Problems Folder in this directory

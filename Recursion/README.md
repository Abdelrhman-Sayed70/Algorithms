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

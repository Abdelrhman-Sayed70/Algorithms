# Divide and Conquer
https://user-images.githubusercontent.com/99830416/227232441-31b7aa04-0cd4-4ad0-9ec1-122c67d354d3.mp4

# Algorithm
#### 1- Divide problem into small sub-problem(s)
#### 2- Conqure [recursevly] the sub-problems by solving them in same manner till base case
#### 3- Combine the solutions of sub-problems to get the solution of parent of them till get the base problem answer
### `It is recursve by nature [Conqure step] solve the same sub-problem using the same manner`
![image](https://user-images.githubusercontent.com/99830416/227218095-d36b2c70-35ab-4c01-9415-989296fe26fe.png)

# Complexity 
- T(n) = Time of normal code + Time of recursive code 
- T(n) = T(Divide & Compine) + T(Conqure)

# Limitaion VS Simplification 
- **`Limitiation`** ignore sub-problem as it doesn't have solution while solving the another part as it has the solution [no combine]
- **`Simplification`** simplify your problem to sub-problems and combine the solution of each sub one to get the base answer [combine or update] `Building cubes`

# Approach
#### Think about one of those 2 approaches  <br> 
- Limit the problem `No combine. the solution is alone` e.g `Binary Search`
- Simplify the problem `combine the answer of each sub-problem [Building cubes]` e.g `Fast Power`


# How to think? 
- Ask: Why to divide and conqure? is it worth? is it will be efficent algo to solve my problem? 
- Ask: How to reach my answer? By `Limitation`  or `Simplification`
- Determine The Base case and Transition
- **Take your time to think about the problem. Divide and conquer is not easy algorithm which need a lot of practice. Good Luck 🤜**

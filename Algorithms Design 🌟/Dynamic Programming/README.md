# Dynamic Programming


https://github.com/Abdelrhman-Sayed70/Algorithms/assets/99830416/561971e9-d9ed-4383-bba3-af4394ff4462


# What is dp?

- **Careful brute-force.**
- **dp is an optimization over plain recursion.**
- **Wherever we use recursion solution that has repeated calls for the same inputs, we can optimize it using dp.**
- **It used in problems that have overlapping sub-problems.**

# How to Apply dp?

- **Store the answer of each sub-problems to avoid calculating it again.**
- **dp needs Extra storage.**
- `Time Space trade-offs.`

# Why dp?

- **Leads to efficient solutions.**
- **Switch exponential complexity to polynomial.**

# When to Use?

## Often used in optimization problems in which:

- **There can be many solutions.**
- **Need to try them all to get the optimal solution.**

## Optimal Substructure

- **Optimal solution to problem found in its TOW or MORE sub-problems. its divide and conquer identity.**
- **There exist Overlapped sub-problems.**


# How to Use?
![image](https://user-images.githubusercontent.com/99830416/236589154-ee9129fe-0fd6-4026-8725-582b9faa0143.png)

## `Bottom-Up`

- Iterative identity
- Start building the solution from the base case.
- Solve ALL sub-problems and store their solutions.
- Called `building table`.
- `[When?]` need to solve ALL sub-problems.
- Better to use loop to avoid memory overhead.

## `Top-Down`

- Recursive identity
- Same as divide and conquer. Start with the big problem and divide till reach base case.
- Solve & Store only its required sub-problems.
- For each sub-problem, check if you solve this problem before. If you solve it get the answer from your storage
- Called `Memoization`
- `[When?]` no need to solve all sub-problems.


# Where to Solve
- [Educational DP Contest | Atcoder](https://atcoder.jp/contests/dp/tasks)


# Materials
- [Dynamic Programming Newbie to Expert | Techdose](https://www.youtube.com/playlist?list=PLEJXowNB4kPxBwaXtRO1qFLpCzF75DYrS)

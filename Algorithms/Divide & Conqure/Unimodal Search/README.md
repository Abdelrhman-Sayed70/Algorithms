# Unimodal Search  
## Problem Statement 
An array A of size n is unimodal if it consists of an increasing sequence, followed by a decreasing sequence <br>  or more precisely, if there is an index m 
such 𝑨[𝒎 − 𝟏] < 𝑨[𝒎] > 𝑨[𝒎 + 𝟏] In particular, 𝑨[𝒎] is the maximum element, and it is the unique “locally maximum” element surrounded by smaller elements 
(𝑨[𝒎 − 𝟏] 𝒂𝒏𝒅 𝑨[𝒎 + 𝟏]). Your task is to determine that index.

![Picture1](https://user-images.githubusercontent.com/99830416/227283504-421ecbb7-b744-41b0-9280-47f7e0decf77.png)

## Brute-Force (Naïve) approach 
- Iterate over array elements and check if the current element is greater than its Neighbours.
- Time complexity Θ(N) `Can we do better?`

## Divide and Conquer approach
### `approach`
- If we have en element and it is greater than its prev and next, so this index is the answer, else that element is greater than its next, so i am in the right part, else if the    current element is smaller than its next, so i am in the left part
- Binary search methodology 
- Ignoring some part and search in another one 
- Problem Type: `Limitation`

### `Base case` 
- The current element is greater than its neighbours.

### `Transition`
- if the current element is at the right part so the answer is at its left part so ignore the right part and go left.
- if the current element is at the left part so the answer is at its right part so ignore the left part and go right.

## Code
```cpp

```

## Complexity 

# Unimodal Search  
## Problem Statement 
An array A of size n is unimodal if it consists of an increasing sequence, followed by a decreasing sequence <br>  or more precisely, if there is an index m 
such 𝑨[𝒎 − 𝟏] < 𝑨[𝒎] > 𝑨[𝒎 + 𝟏] In particular, 𝑨[𝒎] is the maximum element, and it is the unique “locally maximum” element surrounded by smaller elements 
(𝑨[𝒎 − 𝟏] 𝒂𝒏𝒅 𝑨[𝒎 + 𝟏])

![Picture1](https://user-images.githubusercontent.com/99830416/227283504-421ecbb7-b744-41b0-9280-47f7e0decf77.png)

## Brute-Force (Naïve) approach 
- Iterate over array elements and check if the current element is greater than its Neighbours.
- Time complexity Θ(N) `Can we do better?`

## Divide and Conquer approach
- approach: 

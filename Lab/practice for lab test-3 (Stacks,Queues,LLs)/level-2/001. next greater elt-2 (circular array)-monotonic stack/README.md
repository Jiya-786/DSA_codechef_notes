⭐⭐⭐ Question 1: Next Greater Element II (Circular Array)

Problem Statement



Given a circular array nums, for each element find the next greater element.



The next greater element of a number is the first greater number to its right

Since the array is circular, after the last element you continue from the beginning



If no greater element exists → return -1 for that position



Function Signature

vector<int> nextGreaterElements(vector<int>\& nums);

Example 1

nums = \[1,2,1]

Output → \[2, -1, 2]



Explanation:



1 → next greater is 2

2 → no greater → -1

1 → circular → next greater is 2

Example 2

nums = \[5,4,3,2,1]

Output → \[-1,5,5,5,5]

Hint (VERY IMPORTANT)



This is monotonic stack + trick:



👉 Traverse array 2 times (simulate circular)

👉 Use stack to store indices, not values



Core Idea

Maintain decreasing stack

When you find a greater element → update answer

Goal



Time: O(n)

Space: O(n)


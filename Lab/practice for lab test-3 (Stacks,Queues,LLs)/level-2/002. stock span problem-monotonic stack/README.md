⭐⭐⭐ Question 2: Stock Span Problem
Problem Statement

You are given an array prices[] where prices[i] is the stock price on day i.

For each day, find the span:

Span = number of consecutive days (including today) before it where price ≤ today’s price
Function Signature
vector<int> calculateSpan(vector<int>& prices);
Example
prices = [100, 80, 60, 70, 60, 75, 85]
Output  = [1,   1,  1,  2,  1,  4,  6]
Explanation (key intuition)

For 75:

Look back: 60 ≤ 75 ✔
70 ≤ 75 ✔
60 ≤ 75 ✔
80 > 75 ❌ stop
→ span = 4
Hint (IMPORTANT)

👉 Use monotonic stack

Store:

indices (better) OR (price, span)

Core idea:

Pop all elements ≤ current price
Span = distance from last greater element
Goal

Time: O(n)
Space: O(n)
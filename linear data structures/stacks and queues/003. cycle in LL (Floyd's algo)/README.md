Question 3: Detect Cycle in Linked List (Floyd’s Algorithm)

Problem Statement



Given the head of a singly linked list, determine if the linked list has a cycle.



A cycle exists if some node in the list can be reached again by continuously following the next pointer.



Return:



true → if there is a cycle

false → otherwise

Function Signature

bool hasCycle(ListNode\* head);

Example 1



Input:



1 → 2 → 3 → 4 → 2 (cycle)



Output:



true

Example 2



Input:



1 → 2 → 3 → NULL



Output:



false

Hint (important)



Use Floyd’s Cycle Detection (Tortoise \& Hare):



One pointer moves 1 step

One pointer moves 2 steps

If they ever meet → cycle exists

Your Task

Write the function

If you want, also write a small main() to test


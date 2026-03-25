Question 4: Implement Min Stack

Problem Statement



Design a stack that supports the following operations in O(1) time:



push(x) → Push element x onto stack

pop() → Removes top element

top() → Get top element

getMin() → Retrieve the minimum element in the stack

Function Structure

class MinStack {

public:

&#x20;   MinStack();



&#x20;   void push(int val);



&#x20;   void pop();



&#x20;   int top();



&#x20;   int getMin();

};

Example

push(5)

push(3)

push(7)

getMin() → 3

pop()

getMin() → 3

pop()

getMin() → 5


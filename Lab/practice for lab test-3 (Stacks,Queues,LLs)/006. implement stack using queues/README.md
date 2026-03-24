Question 6: Implement Stack using Queues

Problem Statement



Implement a stack using queues.



Stack operations:



push(x) → push element onto stack

pop() → remove top element

top() → get top element

empty() → check if stack is empty

Function Structure

class MyStack {

public:

&#x20;   MyStack();



&#x20;   void push(int x);



&#x20;   int pop();



&#x20;   int top();



&#x20;   bool empty();

};

Example

push(1)

push(2)

top() → 2

pop() → 2

empty() → false

Hint (important)



You have 2 approaches:



Approach 1 (better for you now):



Use one queue

On every push(x):

Push element

Then rotate queue so new element comes to front



Approach 2:



Use 2 queues (a bit more messy)


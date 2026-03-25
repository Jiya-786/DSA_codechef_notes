Question 5: Implement Queue using Stacks

Problem Statement



Implement a queue using two stacks.



Queue operations:



push(x) → insert element at back

pop() → remove element from front

peek() → get front element

empty() → return true if queue is empty

Function Structure

class MyQueue {

public:

&#x20;   MyQueue();



&#x20;   void push(int x);



&#x20;   int pop();



&#x20;   int peek();



&#x20;   bool empty();

};

Example

push(1)

push(2)

peek() → 1

pop() → 1

empty() → false

Hint (core idea)



Use 2 stacks:



s1 → for push

s2 → for pop/peek



When popping:



If s2 empty → transfer all from s1 to s2

Then pop from s2

Key Concept



This gives amortized O(1)


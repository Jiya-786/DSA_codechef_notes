# Push and Pop
Let's use arrays to implement a Stack. We create an array with a max size which decides the max capacity of our stack. To trace the top element of stack we create a variable top which hold the position of array where the top element is present. Initially the top variable will be -1.

## Push Operation:
The push operation adds an element to the top of the stack. Here's a step-by-step explanation of the push operation:

You have an element that you want to store in the stack.
You check if the stack is full. If the stack has a maximum size and it is already full, this is usually called a stack overflow, and the element cannot be added.
If the stack is not full, you place the element at the top of the stack.
You update the pointer that always points to the top of the stack (often referred to as "top" in programming). After the push, "top" will be pointing to the newly added element.

## Pop Operation:
The pop operation removes the top element from the stack. Here's how the pop operation works:

First, you check if the stack is empty. If it's empty, there is nothing to pop, and this condition is known as a stack underflow.
If the stack is not empty, you proceed to remove the element that "top" is currently pointing to.
After removing the element, you update the "top" pointer to point to the new top element of the stack, which is the previous element before the one you just popped.
The popped element is returned or kept for further processing, depending on the implementation and usage.
[main.py](https://github.com/user-attachments/files/25844506/main.py)
```python
MAX_SIZE = 101
a=[0]*MAX_SIZE   # this is how we initialize an array in python
top = -1

def push(ele):
    global top
    if top <= MAX_SIZE-1:
        top += 1
        a[top]=ele
        print(f"Pushed: {ele}")
    else:
        print(f"Stack is full. Cannot push: {ele} ")

def pop():
    global top
    if top >= 0:
        ele = a[top]
        top -= 1
        print(f"Popped: {ele}")
        return ele
    else:
        print("Stack is empty. Cannot pop.")
        return -1```



# Peek, isEmpty, isFull
The peek, isEmpty, and isFull are some other functions used in stacks.

## peek - 
This function allows you to look at the element at the top of the stack. It's a way to inspect the next item that would be removed if a pop operation were to be performed.

For a stack: Peek would return the last item added (since stacks follow Last In, First Out order).
isEmpty - This function checks whether a data structure (like a stack, queue, list, etc.) contains any elements or not.

## isEmpty-
If the data structure contains no elements, isEmpty returns true.
If there is at least one element in the data structure, isEmpty returns false.

## isFull-
isFull - This function is typically relevant for a fixed size stack. It allows you to determine if the data structure has reached its maximum capacity.


# Use cases of Stack:
Stacks are used whenever you need to manage a collection of items that follows the Last-In-First-Out (LIFO) order of processing.
This means that the last element added to the collection is the first one to be removed.
Stacks are commonly used in various programming scenarios, including:

## Expression Evaluation:
 Stacks are widely used in evaluating expressions, particularly mathematical expressions.
For example, they can be used to convert infix expressions (e.g., 3 + 4 * 2) to postfix (or reverse Polish notation) expressions for easy evaluation.

## Function Calls and Recursion: 
The call stack in C (and many other programming languages) is implemented as a stack.
When a function is called, its return address and local variables are pushed onto the call stack.
As functions return, their data is popped off the stack.
Undo/Redo Functionality: Stacks can be used to implement undo and redo functionality in applications, allowing users to revert changes they've made and redo them.

## Backtracking Algorithms:
 Stacks are commonly used in algorithms that require backtracking, such as depth-first search, where you need to store a history of choices made to explore different paths.

## Parsing and Syntax Analysis:
 Stacks can be used during parsing to check whether parentheses, brackets, and other symbols are balanced and properly nested.

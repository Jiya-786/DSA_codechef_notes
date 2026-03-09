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
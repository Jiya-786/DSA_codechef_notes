\[Computing (and representing) the recursion tree for Merge Sort.] Merge Sort is a divide-and-conquer algorithm that recursively divides an array into two halves until subarrays of size 1 are obtained. Write a C++ function that computes and prints the recursion tree of Merge Sort for a given array. (No Leetcode submission)

Note: The recursion tree should be printed using indentation to represent depth. Each line should display the current subarray and the level (depth) in the recursion tree. An example is provided below.



arr = \[38, 27, 43, 3, 9, 82, 10]     #given array



merge\_sort\_tree(arr)



&nbsp;



\#Output:



Level 0: \[38, 27, 43, 3, 9, 82, 10]



&nbsp; Level 1: \[38, 27, 43]



&nbsp;   Level 2: \[38]



&nbsp;   Level 2: \[27, 43]



&nbsp;     Level 3: \[27]



&nbsp;     Level 3: \[43]



&nbsp; Level 1: \[3, 9, 82, 10]



&nbsp;   Level 2: \[3, 9]



&nbsp;     Level 3: \[3]



&nbsp;     Level 3: \[9]



&nbsp;   Level 2: \[82, 10]



&nbsp;     Level 3: \[82]



&nbsp;     Level 3: \[10]



Follow-up questions: (Answer as comments in the code itself)



◦    3a) Count how many nodes are in the recursion tree?



◦    3b) What is the height of the recursion tree?



◦    3c) How does the recursion tree help determine the time complexity of Merge Sort?


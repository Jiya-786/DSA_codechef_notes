Leaders in an array

You are given an integer array 

n

u

m

s

nums. An element in the array is called a leader if it is strictly larger than every element to its right. The last element in the array is always considered a leader.



Return a list of all such leaders, preserving the order in which they appear in the original array.



Function Declaration

Function Name

f

i

n

d

L

e

a

d

e

r

s

findLeaders – This function identifies all leader elements in the given array.

An element is considered a leader if it is strictly greater than every element to its right.

The last element of the array is always a leader.



Parameters

n

u

m

s

nums : A reference to an integer array of size 

n

n.

Return Value

Returns a list of all leader elements preserving their order as in the original array.

Constraints

1

≤

n

u

m

s

.

l

e

n

g

t

h

≤

10

5

1≤nums.length≤10 

5

&nbsp;

−

10

4

≤

n

u

m

s

\[

i

]

≤

10

4

−10 

4

&nbsp;≤nums\[i]≤10 

4

&nbsp;

Input Format

The first line contains a single integer 

T

T — the number of test cases.

For each test case:

The first line contains an integer 

n

n — the size of the array.

The second line contains 

n

n integers representing the array 

n

u

m

s

nums.

Output Format

For each test case, print all leader elements in the same order they appear in the array, separated by spaces.


Alternating Array

Chef has an array of integers. The array has even length and contains an equal number of positive and negative integers. Chef wants to rearrange the array so that:



Every consecutive pair of numbers has opposite signs.

The relative order of positive numbers among themselves and negative numbers among themselves is preserved.

The array starts with a positive number.

Help Chef rearrange his array according to these rules.



Function Declaration

Function Name

r

e

a

r

r

a

n

g

e

A

r

r

a

y

rearrangeArray – This function rearranges an array of integers.



Parameters

a

r

r

arr : A reference to a vector of integers of size 

n

n.



Contains both positive and negative integers.

Has an equal number of positive and negative values.

n

n : An integer representing the size of the array



Always even

Satisfies all constraints

Return Value

The function does not return anything.



It modifies the vector in-place, producing a rearranged array that:



Starts with a positive integer

Alternates sign at every position

Preserves the internal order of all positive and all negative elements

Constraints

2

≤

N

≤

2

⋅

10

5

2≤N≤2⋅10 

5

&nbsp;

N

N is even

1

≤

∣

A

\[

i

]

∣

≤

10

5

1≤∣A\[i]∣≤10 

5

&nbsp;

The array contains exactly 

N

/

2

N/2 positive and 

N

/

2

N/2 negative integers

Input Format

The first line contains a single integer 

T

T — the number of test cases.



For each test case:



The first line contains an integer 

N

N — the size of the array.

The next line contains 

N

N space-separated integers representing the array elements.

Output Format

For each test case, print the rearranged array (starting with positive and alternating signs) on a new line.


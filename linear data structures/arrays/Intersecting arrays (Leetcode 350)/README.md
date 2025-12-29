Intersecting arrays

Given two integer arrays 

n

u

m

s

1

nums1 and 

n

u

m

s

2

nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and return the result in sorted order.



Intersection is defined as the common element in both arrays. For example -



n

u

m

s

1

nums1 - \[1, 2] and 

n

u

m

s

2

nums2 - \[2, 1, 3]



Therefore, only 1 and 2 are common in both arrays. On sorting the resultant array would be \[1, 2].



Input Format

The first line contains two integers 

n

n , 

m

m— the size of 

n

u

m

s

1

nums1 and 

n

u

m

s

2

nums2.

The second line contains n integers 

a

1

,

a

2

,

…

,

a

n

a1,a2,…,an — the number of 

n

u

m

s

1

nums1.

The third line contains m integers 

b

1

,

b

2

,

…

,

b

m

b1,b2,…,bm — the number of 

n

u

m

s

2

nums2.

Output Format

Print all the elements that are appearing in both the arrays in sorted order.



Constraints

1

≤

n

,

m

≤

100

1≤n,m≤100

0

≤

a

i

≤

100

0≤ai≤100

0

≤

b

i

≤

100

0≤bi≤100


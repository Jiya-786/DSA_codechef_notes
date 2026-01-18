### We’ll use this array:

Index:  0  1  2  3  4
Array: [5, 2, 4, 1, 3]

Initial call:
mergeSort(arr, 0, 4)

🔹 STEP 1: Split whole array
left = 0, right = 4
middle = 2

Calls:
mergeSort(arr, 0, 2)   // LEFT HALF
mergeSort(arr, 3, 4)   // RIGHT HALF

🔹 LEFT HALF TRACE (0 to 2)
mergeSort(arr, 0, 2)
middle = 1


Calls:

mergeSort(arr, 0, 1)
mergeSort(arr, 2, 2)

Split (0 to 1):
mergeSort(arr, 0, 1)
middle = 0

Calls:
mergeSort(arr, 0, 0)  // stop
mergeSort(arr, 1, 1)  // stop
merge(arr, 0, 0, 1)   // merges [5] and [2] → [2,5]

Now array becomes:
[2, 5, 4, 1, 3]

Right part of left half:
mergeSort(arr, 2, 2) // single element → already sorted


Now merge:
merge(arr, 0, 1, 2)

Merges:
[2,5] and [4] → [2,4,5]

Array now:
[2, 4, 5, 1, 3]

🔹 RIGHT HALF TRACE (3 to 4) ⭐
mergeSort(arr, 3, 4)
middle = 3

Calls:
mergeSort(arr, 3, 3)  // stop
mergeSort(arr, 4, 4)  // stop

Now merge:
merge(arr, 3, 3, 4)

Merges:
[1] and [3] → [1,3]

Array becomes:
[2, 4, 5, 1, 3]
(No visible change because it was already sorted)

🔹 FINAL MERGE (whole array)

Now both halves are sorted:
Left half:  [2,4,5]  (0 to 2)
Right half: [1,3]    (3 to 4)

Final call:
merge(arr, 0, 2, 4)

Merges:
[2,4,5] and [1,3] → [1,2,3,4,5]

Final array:
[1, 2, 3, 4, 5]

# 🧠 FULL RECURSION TREE
mergeSort(0,4)
 ├── mergeSort(0,2)
 │    ├── mergeSort(0,1)
 │    │    ├── mergeSort(0,0) stop
 │    │    ├── mergeSort(1,1) stop
 │    │    └── merge(0,0,1)
 │    ├── mergeSort(2,2) stop
 │    └── merge(0,1,2)
 ├── mergeSort(3,4)
 │    ├── mergeSort(3,3) stop
 │    ├── mergeSort(4,4) stop
 │    └── merge(3,3,4)
 └── merge(0,2,4)

# code-
function MERGE-SORT(A, left, right)
if left < right
middle = (left + right) / 2
MERGE-SORT(A, left, middle)
MERGE-SORT(A, middle + 1, right)
MERGE(A, left, middle, right)

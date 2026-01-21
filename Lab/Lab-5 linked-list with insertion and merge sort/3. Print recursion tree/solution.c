#include <bits/stdc++.h>
using namespace std;

void printArray(const vector<int>& arr, int l, int r) {
    cout << "[";
    for (int i = l; i <= r; i++) {
        cout << arr[i];
        if (i < r) cout << ", ";
    }
    cout << "]" << endl;
}

void mergeSortTree(const vector<int>& arr, int l, int r, int level) {

    for (int i = 0; i < level; i++) {
        cout << "  ";
    }

    cout << "Level " << level << ": ";
    printArray(arr, l, r);

    if (l >= r)
        return;

    int mid = (l + r) / 2;

    mergeSortTree(arr, l, mid, level + 1);
    mergeSortTree(arr, mid + 1, r, level + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSortTree(arr, 0, n - 1, 0);

    return 0;
}

/*
========================
Follow-up Answers
========================

3a) How many nodes are in the recursion tree?
---------------------------------------------
Each node represents a subarray processed by Merge Sort.
For an array of size n, Merge Sort creates exactly:
    2n - 1 nodes
This includes:
- n leaf nodes (subarrays of size 1)
- n - 1 internal nodes (larger subarrays)

3b) What is the height of the recursion tree?
---------------------------------------------
The height of the recursion tree is:
    O(log n)
Because the array is divided into two halves at each level.

3c) How does the recursion tree help determine time complexity?
---------------------------------------------------------------
At each level of the recursion tree:
- All subarrays together contain n elements
- The work done per level is O(n)

Since the height of the tree is O(log n),
Total time complexity = O(n log n)

This is how the recursion tree visually explains why
Merge Sort runs in O(n log n) time.
*/

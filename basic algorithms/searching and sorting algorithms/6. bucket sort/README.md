#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return;

    // find min and max
    int minVal = arr[0], maxVal = arr[0];
    for (int x : arr) {
        if (x < minVal) minVal = x;
        if (x > maxVal) maxVal = x;
    }

    int m = n;  // number of buckets

    // range of each bucket
    int range = (maxVal - minVal+1) / m ;

    vector<vector<int>> buckets(m);

    // distribute elements
    for (int x : arr) {
        int idx = (x - minVal) / range;
        buckets[idx].push_back(x);
    }

    // sort each bucket
    for (int i = 0; i < m; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // merge buckets
    int k = 0;
    for (int i = 0; i < m; i++) {
        for (int x : buckets[i]) {
            arr[k++] = x;
        }
    }
}

#include "fastMaxSum.h"
#include <algorithm>
#include <climits>
using namespace std;

int fastMaxSum(const vector<int>& A, int lo, int hi) {
    if (lo == hi) return A[lo]; // base case

    int mid = (lo + hi) / 2;
    int left = INT_MIN, right = INT_MIN, sum = 0;

    for (int i = mid; i >= lo; i--) {
        sum += A[i];
        left = max(left, sum);
    }

    sum = 0;
    for (int j = mid + 1; j <= hi; j++) {
        sum += A[j];
        right = max(right, sum);
    }

    int single = max(fastMaxSum(A, lo, mid), fastMaxSum(A, mid + 1, hi));
    return max(single, left + right);
}

#include "fastMaxSum.h"
#include <algorithm>

using namespace std;
int MIN = -2147483648;

int fastMaxSum(const vector<int>& A, int lo, int hi){
    if (lo == hi) return A[lo];
    int mid = (lo + hi) / 2;
    
    int left = MIN;
    int right = MIN;
    int sum = 0;
    for (int i = mid; i >= lo ; i--){
        sum += A[i];
        left = max(sum, left);
    }
    sum = 0;
    for (int j = mid + 1; j <= hi; j++){
        sum += A[j];
        right = max(sum, right);
    }
    int single = max(fastMaxSum(A, lo, mid), fastMaxSum(A, mid+1, hi));
    int ret = max(single, left+right);
    return ret;
}



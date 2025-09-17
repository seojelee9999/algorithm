#include <iostream>
#include <vector>
#include "fastMaxSum.h"
using namespace std;

int main() {
    vector<int> arr = {1, -2, 3, 5, -1};
    cout << fastMaxSum(arr, 0, arr.size() - 1) << endl;
}

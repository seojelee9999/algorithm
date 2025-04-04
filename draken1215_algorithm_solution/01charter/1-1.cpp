#include <iostream>


using namespace std;

int binary_search(int lo, int hi, int age){
	int cnt = 0;

	while (lo + 1 < hi){
		int mid = (lo + hi) / 2;
		if (mid > age) hi = mid;
		else lo = mid;
		cnt++;
		cout << "cnt : " << cnt << " lo : " << lo << " hi : " << hi << '\n';
	}
	return lo;
}



int main(){
	int n;
	cin >> n;
	binary_search(20,36, n);
}


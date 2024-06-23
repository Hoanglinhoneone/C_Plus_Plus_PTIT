#include<bits/stdc++.h>

using namespace std;

// sort : intro sort = quick sort + heap sort : O(NlogN)
// stable_sort: merge sort + insertion sort : ?n d?nh pt xh trc sx trc.
// comparion function : ham so sanh.
// sort(a, a+n, greater<int>()) : sx gi?m d?n.
bool sxgiam(int a, int b){
	return a > b;
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int &i:a) cin >> i;
	sort(a,a+n,greater<int>());// sx giam dan.
	sort(a, a+n,sxgiam);// sx giam dan.
	for(int x:a) cout << x << " ";
}
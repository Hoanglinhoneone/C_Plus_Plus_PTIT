#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int n, k;
int a[100000];
bool check(ll x){
	int dem = 0;
	ll sum = 0;
	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum > x){
			dem++;
			sum = a[i];
		}
	}
	return dem <= k;
}
int main(){
    cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> i;
	}
	ll l = *max_element(a, a+n);// pt max trong a[]
	ll r = accumulate(a, a+n, 0ll);// sum c?a a[]
	ll res;
	while(l<=r){
		ll mid = (l+r)/2;
		if(check(mid)){
			res = mid;
			r = mid -1;
		}
		else {
			l = mid  + 1;
		}
	}
	cout << res << endl;
}
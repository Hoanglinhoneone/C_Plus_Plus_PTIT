#include<bits/stdc++.h>

using namespace std;
const int m9 = 1e9+7;
using ll = long long;
int xuly(int a[], int n, int mod){
	ll res = 0;
	for(int i =0;i<n;i++){
		res = res*10 + a[i];
		res%=mod;
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	cout << xuly(a, n, m9);
	
}
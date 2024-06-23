#include<bits/stdc++.h>

using namespace std;

const int m9 = 1e9+7;

using ll = long long;

int main(){
	int n;
	cin >> n;
	ll res = 1;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		res *= a[i];
		res%=m9;
	}
	cout << res;
}
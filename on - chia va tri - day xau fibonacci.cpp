#include<bits/stdc++.h>

using namespace std;
using ll = long long ;
ll f[95];
void sinh(){
	f[0] = 0;
	f[1] = 1;
	for(int i=2;i<=92;i++){
		f[i] = f[i-1] + f[i-2];
	}
}
char find(int n, ll k){
	if(n == 1 ) return 'A';
	if(n == 2) return 'B';
	if(k <= f[n-2]) {
		return find(n-2, k);
	}
	else {
		return find(n-1, k - f[n-2]);
	}
}
int main(){
	sinh();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll k; cin >> k;
		cout << find(n, k) << endl;
	}
}
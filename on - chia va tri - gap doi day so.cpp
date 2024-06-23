#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll p[50];
void sinh_pow2(){
	p[0] = 1;
	for(int i=1;i<50;i++){
		p[i] = p[i-1] * 2;
	}
}
int find(int n, ll k){
	if(k%2==1) return 1;
	if(k == p[n-1]){
		return n;
	}
	if( k < p[n-1])  return find(n-1, k);
	else return find(n-1, k - p[n-1]);
}
int main(){
	sinh_pow2();
	int t;
	cin >> t;
	while(t--){
		int n;
		ll k;
		cin >> n >> k;
		cout << find(n, k) << endl;
	}
}
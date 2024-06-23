#include<bits/stdc++.h>

using namespace std;

using ll = long long;
const int mod = 1e9 + 7;
ll dao(ll a){
	ll b = 0;
	while(a){
		int x = a%10;
		b = b*10 + x;
		a/=10;
	}
	return b;
}
ll powbin(ll a, ll b){
	if(b == 0) return 1;
	ll x = powbin(a, b/2);
	if(b%2==0) return (x*x)%mod;
	else {
		return (((x*x)%mod)*a)%mod;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a;
		cin >> a;
		ll b = dao(a);
		cout << powbin(a, b) << endl;
	}
}
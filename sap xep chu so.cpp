#include<bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n];
		set<ll> se;
		for(int i=0;i<n;i++){
			cin >> a[i];
			while(a[i]){
				int x = a[i]%10;
				se.insert(x);
				a[i]/=10;
			}
		}
		for(auto it:se){
			cout << it <<" ";
		}
		cout << endl;
	}
}
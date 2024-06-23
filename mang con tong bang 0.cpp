#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	ll sum = 0;
	map<ll, int> mp;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum == 0){
			cout << 1;
			return 0;
		}
		if(mp.count(sum)){
			cout << 1 ;
			return 0;
		}
		mp[sum]=1;
	}
	cout << -1;
}
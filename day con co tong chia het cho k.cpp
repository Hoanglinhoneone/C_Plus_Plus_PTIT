#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x :a) cin >> x;
	ll sum = 0;
	int maxpt = -1;
	map<ll, int> mp;
	for(int i=0;i<n;i++){
		sum+=a[i];
		sum = (sum%k + k)%k;
		if(sum % k == 0) {
			maxpt = max(maxpt, i+1);
		}
		if(mp.count(sum%k)){
			maxpt = max(maxpt, i - mp[sum%k]);
		}
		if(mp.count(sum%k)){
			mp[sum%k] = i;
		}
	}
	cout << maxpt;
}
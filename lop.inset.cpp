#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,x;
	cin >> n >> m;
	map<int, int> mp;
	for(int i=0;i<n;i++){
		cin >> x;
		mp[x]++;
	}
	for(int i=0;i<m;i++){
		cin >> x;
		mp[x]++;
	}
	for(auto it:mp){
		if(it.second > 1) cout << it.first << " ";
	}
	return 0;
}
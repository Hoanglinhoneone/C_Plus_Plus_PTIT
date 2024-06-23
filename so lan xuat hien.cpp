#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		bool ok = false;
	    for(auto it : mp){
	    	if(it.first == x){
	    		cout << it.second << endl;
	    		ok = true;
	    	}
		}
		if(ok == false) cout << "-1" << endl;
	}
	return 0;
}
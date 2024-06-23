#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<long long, int> mp;
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int key, value=INT_MIN;
		for(auto x:mp){
			if(x.second > value){
				value=x.second;
				key=x.first;
			}
		}
		cout << key << " " << value << endl; 
	}
}
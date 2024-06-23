#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		map<char, int> mp;
		char s[10000];
		cin >> s;
		for(int i=0; i < strlen(s); i++){
			mp[s[i]]++;
		}
		for(auto it:mp){
			if(it.second == 1){
				cout << it.first;
			}
		}
		cout << endl;
	}
	return 0;
}
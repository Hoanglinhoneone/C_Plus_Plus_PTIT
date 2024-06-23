#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> mp;
		int dem=0;
		char max;
		for(int i =0;i<s.size();i++){
			mp[s[i]]++;
			if(mp[s[i]] > dem){
				max=s[i];
				dem=mp[s[i]];
			}
		}
		if((mp[max])-1>s.size()-mp[max]){
			cout << "0" << endl;
		}
		else {
			cout << "1" << endl;
		}
	}
}
#include<bits/stdc++.h>

using namespace std;

int main(){
		int t; cin >> t;
		while(t--){
			string s;
			int k,dem=0;;
			cin >> s >> k;
			int n=s.size();
			for(int i=0;i<n;i++){
				set<char> se;
				for(int j=i;j<n;j++){
					se.insert(s[j]);
					if(se.size() == k) dem++;
					if(se.size() > k) break;
				}
			}
			cout << dem << endl;
		}
}
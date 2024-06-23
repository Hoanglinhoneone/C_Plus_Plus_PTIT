#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		long long n=0,j,dem=0;
		set<long long> ds;
		for(int i=0;i<s.size();i++){
			if(s[i] <= '9' && s[i] >= '0' && (s[i-1] <'0' && s[i-1] >'9')){
				n=s[i]-'0';
				j=i+1;
				while(s[j] >='0' && s[j] <='9'){
					n=n*10+s[j]-'0';
					j++;
				}
				ds.insert(n);
			}
		}
		int x=ds.size()-1;
		for(auto y: ds){
			if(dem==x){
				cout << y <<endl;
			}
			++dem;
		}
	}
}

#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		vector<int> v;
		for(int i=0;i<s.size();i++){
			if((s[i] >= '0' && s[i] <= '9') && (s[i-1] <= '0' || s[i-1] > '9')){
				int j=i+1;
				int k=s[i]-'0';
				while(s[j] >= '0' && s[j] <= '9'){
					k=k*10+s[j]-'0';
					j++;
				}
				v.push_back(k);
			}
		}
		ll sum=0;
		for(int i=0;i<v.size();i++){
			sum+=v[i];
		}
		cout << sum << endl;
	}
}
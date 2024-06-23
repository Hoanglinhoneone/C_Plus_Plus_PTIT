#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		long long k=0,j,sum=0;
		vector<long long> v;
		for(int i=0;i<s.size();i++){
			if(s[i] >= '0' && s[i] <= '9' && (s[i-1] <'0' || s[i-1] > '9')){
				k=s[i]-'0';
				j=i+1;
				while(s[j] >='0' && s[j] <= '9'){
					k=k*10+s[j]-'0';
					j++;
				}
				v.push_back(k);
			}
		}
		int max=0;
		for(int i=0;i<v.size();i++){
			if(v[i] >= max){
				max=v[i];
			}
		}
		cout << max << endl;
	}
}

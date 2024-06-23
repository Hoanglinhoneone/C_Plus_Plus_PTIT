#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		char a;
		cin >> s;
		int cnt=0;
		string ss="";
		for(int i=0;i < s.size() - 1 ;i++){
			for(int j=i+1;j<s.size();j++){
				if(s[i] > s[j] ){
					a=s[i];
					s[i]=s[j];
					s[j]=a;
				}
			}
		}
		for(int i=0;i < s.length();i++){
			if(s[i] >= '0' && s[i] <= '9'){
				cnt += s[i]-'0';
			}
			else {
				ss += s[i];
			}
		}
		ss = ss + to_string(cnt);
		cout << ss << endl;
	}
}
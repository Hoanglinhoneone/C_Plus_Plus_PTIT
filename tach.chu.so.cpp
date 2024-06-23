#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int x=s.size();
		int sum=0;
		char a;
		for(int i=0;i<x-1;i++){
			for(int j=i+1;j<x;j++){
				if(s[i] > s[j] ){
					a=s[i];
					s[i]=s[j];
					s[j]=a;
				}
			}
		}
		for(int i=0;i<s.size();i++){
			if(s[i] >= 'A' && s[i] <= 'Z'){
				cout << s[i];
			}
			if(s[i] >= '0' && s[i] <= '9'){
				s[i]=s[i]-'0';
				sum += s[i];
			}
		}
		cout << sum << endl;
	}
}

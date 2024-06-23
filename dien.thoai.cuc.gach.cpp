#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
			if((s[i] >= 'A' && s[i] <= 'C') || (s[i] >='a' && s[i] <= 'c')){
				s[i]='2';
			}
			if((s[i] >= 'D' && s[i] <= 'F') || (s[i] >='d' && s[i] <= 'f')){
				s[i]='3';
			}
			
			if((s[i] >= 'G' && s[i] <= 'I') || (s[i] >='g' && s[i] <= 'i')){
				s[i]='4';
			}
			if((s[i] >= 'J' && s[i] <= 'L') || (s[i] >='j' && s[i] <= 'l')){
				s[i]='5';
			}
			if((s[i] >= 'M' && s[i] <= 'O') || (s[i] >='m' && s[i] <= 'o')){
				s[i]='6';
			}
			if((s[i] >= 'P' && s[i] <= 'S') || (s[i] >='p' && s[i] <= 's')){
				s[i]='7';
			}
			if((s[i] >= 'T' && s[i] <= 'V') || (s[i] >='t' && s[i] <= 'v')){
				s[i]='8';
			}
			if((s[i] >= 'W' && s[i] <= 'Z') || (s[i] >='w' && s[i] <= 'z')){
				s[i]='9';
			}
		}
		int x=s.size()-1;
		int d=0;
		for(int i=0;i<=x/2;i++){
			if(s[i] != s[x-i]){
				d=1;
	        }
		}
		if(d==0){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}

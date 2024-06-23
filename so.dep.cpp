#include<bits/stdc++.h>

using namespace std;

int check(string s){
	int x=s.size();
	int i=0;
	while(i>x/2){
		if(s[i] != s[x-i-1]){
			return 0;
		}
		i++;
	}
	return 1;
}
int check_chan(string s){
	for(int i=0;i<s.size();i++){
		int x=s[i]-'0';
		if(x%2 != 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin.ignore();
		cin >> s;
		if(check(s) && check_chan(s)){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		
	}
}

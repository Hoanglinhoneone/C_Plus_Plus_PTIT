#include<bits/stdc++.h>

using namespace std;
void check(string s){
	int chan=0,le=0;
	for(int i=0;i<s.size();i++){
		if(i%2==0){
			chan += s[i]-'0';
		}
		else {
			le += s[i]-'0';
		}
	}
	int hieu=abs(chan-le);
	if(hieu % 11 ==0){
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin.ignore();
		cin >> s;
		check(s);
		
		
	}
}

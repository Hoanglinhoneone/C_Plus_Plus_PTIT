#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	string s[t];
	for(int i=0;i<t;i++){
		getline(cin,s[i]);
	}
	int dem=1;
	sort(s,s+t);
	for(int i=0;i<t-1;i++){
		if(s[i] != s[i+1]){
			dem++;
		}
	}
	cout << dem ;
}

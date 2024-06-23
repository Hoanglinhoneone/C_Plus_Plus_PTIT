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
		int dem=0;
		for(int i=0;i<x;i++){
			for(int j=i;j<x;j++){
				if(s[i]==s[j]){
					dem++;
				}
			}
		}
		cout << dem <<endl;
	}
}

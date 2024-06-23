#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin.ignore();
		getline(cin,s);
		stringstream ss(s);
		string token;
		int dem=0;
		while(ss >> token){
			dem++;
		}
		cout << dem << endl;
	}
}

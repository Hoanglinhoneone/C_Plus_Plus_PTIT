#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string x;
	getline(cin,s);
	getline(cin,x);
	stringstream ss(s);
	string token;
	while(ss >> token){
		if(token != x){
			cout << token << " ";
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size()-1;i++){
		s[i]=tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string token;
	while(ss >> token){
		v.push_back(token);
	}
	string x=v[v.size()-1];
	for(int i=0;i<x.size();i++){
	    x[i] = toupper(x[i]);
    }   
	for(int i=0;i<v.size() - 1;i++){
		v[i][0]=toupper(v[i][0]);
    }
	for(int i=0;i<v.size()-1;i++){
		cout << v[i] ;
		if(i!= v.size()-2){
			cout << " ";
		}
	}
	cout << ", ";
	cout << x;
}

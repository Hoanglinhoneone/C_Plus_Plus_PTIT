#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int x;
		cin >> x;
		cin.ignore();
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++){
				s[i]=tolower(s[i]);
			}
			stringstream ss(s);
			string token;
			vector<string> v;
			while(ss >> token){
				v.push_back(token);
			}
			for(int i=0;i<v.size();i++){
				v[i][0]=toupper(v[i][0]);
			}
		if(x==1){
			cout << v[v.size()-1] << " ";
			for(int i=0;i<v.size()-1;i++){
				cout << v[i] <<" ";
			}
		}
		if(x==2){
			for(int i=1;i<v.size();i++){
				cout << v[i] <<" ";
			}
			cout << v[0];
		}
		cout << endl;
	}
}

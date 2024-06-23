#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--){
		string s;
		getline(cin,s);
		vector<string> v ;
		stringstream ss(s);
		string token;
		while(ss >> token){
			for(int i=0;i<token.size();i++){
				token[i]=tolower(token[i]);
			}
			v.push_back(token);
		}
		string name="";
		name += v[v.size()-1];
		for(int i=0;i<v.size()-1;i++){
			name+= v[i][0];
		}
		mp[name]++;
		if(mp[name]==1){
			cout << name <<"@ptit.edu.vn"<<endl;
		}else {
			cout << name << mp[name] << "@ptit.edu.vn"<<endl;
		}	
	}
}
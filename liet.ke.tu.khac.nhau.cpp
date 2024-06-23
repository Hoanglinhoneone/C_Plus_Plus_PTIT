#include<bits/stdc++.h>

using namespace std;

int main(){
	set<string> se;
	ifstream myFile("VANBAN.in", ios::in);
	if(myFile){
		string s;
		while(myFile >> s){
			for(int i=0;i<s.size();i++){
				s[i]= tolower(s[i]);
			}
			se.insert(s);
		}
	}
	for(auto it:se){
		cout << it << endl;
	}
	myFile.close();
	return 0;
}
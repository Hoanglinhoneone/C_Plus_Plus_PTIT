#include<bits/stdc++.h>
using namespace std;
void tolowerstring(string &s){
	for(int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	set<string> se1;
	set<string> se2;
	map <string, int> mp;
	ifstream myFile1("DATA1.in", ios::in);
	ifstream myFile2("DATA2.in", ios::in);
	
	string s1;
	while(myFile1 >> s1){
	    tolowerstring(s1);
		se1.insert(s1);
	}
	
	string s2;
	while(myFile2 >> s2){
		tolowerstring(s2);
		se2.insert(s2);
	}
	
	for(auto it:se1){
		mp[it]++;
	}
	for(auto it:se2){
		mp[it]++;
	}
	
	for(auto it:mp){
		cout << it.first <<" ";
	}
	cout << endl;
	for(auto it:mp){
		if(it.second > 1){
			cout << it.first << " ";
		}
	}
	myFile1.close();
	myFile2.close();
	return 0;
} 
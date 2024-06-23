#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int , int> mp;
	ifstream myFile("DATA.in", ios::in);
	if(myFile){
		int x;
		while(myFile >> x){
			mp[x]++;
		}
	}
	
	for(auto it:mp){
		cout << it.first << " " << it.second << endl;
	}
	myFile.close();
	return 0;
}
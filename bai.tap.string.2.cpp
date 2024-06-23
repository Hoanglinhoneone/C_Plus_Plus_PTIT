#include<bits/stdc++.h>

using namespace std;

int main(){
	string s,s1;
	getline(cin, s);
	cin >> s1;
    int vt;
    vt=s.find(s1);
    cout << vt <<endl;
    s.erase(vt,s1.size());
	for(int i=0;i<s.size();i++){
		cout << s[i];
	}
}
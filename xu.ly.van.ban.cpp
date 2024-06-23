#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int check=1;
	while(cin >> s){
		int n=s.size();
		for(int i=0;i<n;i++){
			s[i]=tolower(s[i]);
		}
		if(check==1){
			s[0]=toupper(s[0]);
			check=0;
		}
		if(s[n-1]=='.' || s[n-1] =='?' || s[n-1] == '!'){
			s.pop_back();
			cout << s << endl;
			check=1;
		}
		else {
			cout << s << " ";
		}
	}
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		string s;
		getline(cin,s);
		if(s.size() < 26){
			cout << 0 << endl;
			continue ;
		}
		else {
		int k;
		cin >> k;
		int check[10000];
		for(int j='a';j<='z';j++){
			check[j]=0;
		}
		for(int i=0;i<s.size();i++){
			for(int j='a';j<='z';j++){
				if(s[i]==j){
					check[j]=1;
				}
			}
		}
		int dem=0;
		for(int j='a';j<='z';j++){
			if(check[j]==0){
				dem++;
			}
	    }
	    if(k >= dem ){
	    	cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
        }		
		}
		cin.ignore();
	}
	return 0;
}

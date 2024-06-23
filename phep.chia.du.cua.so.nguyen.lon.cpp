#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin  >> t;
	while(t--){
			string n;
			long long m,kq=0;
			cin >> n >> m;
			for(int i=0;i<n.size();i++){
				kq=(kq*10+(n[i]-'0'))%m;
			}
			cout << kq << endl;
	}
}
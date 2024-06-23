#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		long long b,M;
		cin >> a >> b >> M;
		long long kq=0;
		for(int i=0;i<b;i++){
			kq=kq*kq;
			for(int i=0;i<a.size();i++){
				kq=(kq*10+(a[i]-'0'))%M;
			}
		}
		cout << kq<< endl;
	}
}
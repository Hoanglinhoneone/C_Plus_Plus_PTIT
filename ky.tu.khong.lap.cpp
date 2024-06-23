#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int b[26]={},n=a.size();
		for(int i=0;i<n;i++) b[a[i]-'A']++;
		for(int i=0;i<a.size();i++) if(b[a[i]-'A']==1) cout<<a[i];
		cout<<endl;
	}
}

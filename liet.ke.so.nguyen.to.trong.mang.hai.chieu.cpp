#include<bits/stdc++.h>

using namespace std;
int snt(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int n,m; cin >> n >> m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j]; 
		}
	}
	map<long long, int> mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(snt(a[i][j])==1 && mp[a[i][j]]==0){
				cout << a[i][j] <<" ";
				mp[a[i][j]]=1;
			}
		}
	}
	return 0;
}
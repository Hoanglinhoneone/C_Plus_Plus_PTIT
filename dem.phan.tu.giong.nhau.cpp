#include<bits/stdc++.h>

using namespace std;
int check(int a[105][105], int n, int m, int se){
	int dem1=0;
	for(int i=0;i<n;i++){
		int dem2=0;
		for(int j=0;j<m;j++){
			if(a[i][j]==se){
				dem2=1;
			}
		}
		if(dem2==1){
			dem1++;
		}
	}
	if(dem1==n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n;
		m=n;
		int a[105][105];
		set<int> se;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			    cin >> a[i][j];
		    }
		}
		for(int j=0;j<n;j++){
			se.insert(a[0][j]);
		}
		int dem=0;
		for(auto x:se){
			if(check(a, n, m, x) == 1){
				dem++;
			}
		}
		cout << dem <<endl;
	}
}
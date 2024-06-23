#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int v[n*n];
	for(int i=0;i<n*n;i++){
		cin >> v[i];
	}
	sort(v, v+n*n);
	int h1=0,c1=0,hc=n-1,cc=n-1;
	int dem=0;
	int a[n][n];
	while(h1<=hc && c1 <= cc){
		for(int i=c1; i<=cc; i++){
			a[h1][i]=v[dem++];
		}
		++h1;
		for(int i=h1; i<=hc; i++){
			a[i][cc]=v[dem++];
		}
		--cc;
		if(h1<=hc){
			for(int i=cc; i>=c1; i--){
				a[hc][i]=v[dem++];
			}
			--hc;
		}
		if(c1 <= cc){
			for(int i=hc; i>=h1; i--){
				a[i][c1]=v[dem++];
			}
			++c1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
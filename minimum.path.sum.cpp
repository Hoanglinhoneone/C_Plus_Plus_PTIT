#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int b[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(i==0 && j == 0){
					b[i][j]=a[i][j];
				}
				else if(j==0){
					b[i][j]=b[i-1][j]+a[i][j];
				}
				else if(i==0){
					b[i][j]=b[i][j-1]+a[i][j];
				}
				else {
					b[i][j]=min(b[i-1][j],b[i][j-1])+a[i][j];
				}
			}
		}
		cout << b[n-1][m-1] << endl;
	}
}
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n];
	for(int i=0; i < n; i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	int m; cin >> m;
	int b[m][m];
	for(int i=0; i < m; i++){
		for(int j=0;j<m;j++){
			cin >> b[i][j];
		}
	}
	int c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]= a[i][j]*b[i%m][j%m];
		}
	}
	for(int i=0; i < n; i++){
		for(int j=0;j<n;j++){
			cout <<  c[i][j] << " ";
		}
		cout << endl;
	}	
}
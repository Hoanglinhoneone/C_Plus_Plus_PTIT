#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==0){
					a[i][j]+=max(a[i-1][j],a[i-1][j+1]);
				}
				else if(j==m-1){
					a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
				}
				else {
					a[i][j]+= max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]));
				}
			}
		}
		cout << *max_element(a[n-1], a[n-1] + m ) << endl;
	}
	return 0;
}
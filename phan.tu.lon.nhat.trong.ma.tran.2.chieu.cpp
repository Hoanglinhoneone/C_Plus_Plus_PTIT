#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		int n,m;cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int max_value=INT_MIN;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				max_value=max(max_value,a[i][j]);
			}
		}
		cout << max_value << endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==max_value){
					cout << "Vi tri xuat hien a["<< i+1 <<"]" <<"["<<j+1<<"]"<<endl;
				}
			}
		}
	}
}
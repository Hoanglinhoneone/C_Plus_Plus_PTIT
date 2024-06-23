#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,m;
		cin >> n >> m;
		long long a[n][m];
		long long h[n]={0};
		long long c[m]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					h[i]=1;
					c[j]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(h[i]==1){
                for(int j=0;j<m;j++){
				a[i][j]=1;
			    }
			}
		}
		for(int j=0;j<m;j++){
			if(c[j]==1){
			    for(int i=0;i<n;i++){
				a[i][j]=1;
		    	}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

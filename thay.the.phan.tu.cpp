#include<bits/stdc++.h>

//cong cac phan tu xung quanh no voi chinh no.   
using namespace std;
int di[8]={-1, -1, -1, 0, 0, 1, 1, 1 };
int dj[8]={-1, 0, 1, -1, 1, -1, 0, 1 };
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int b[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				int sum=a[i][j];
				for(int k=0; k<8; k++){
					int imoi=i+di[k];
					int jmoi=j+dj[k];
					if(imoi >=0 && imoi <n && jmoi >=0 && jmoi <m){
						sum+=a[imoi][jmoi];
					}
				}
				b[i][j]=sum;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << b[i][j] <<" ";
			}
			cout <<endl;
		}
		cout << endl;
	}
	return 0;
	
}
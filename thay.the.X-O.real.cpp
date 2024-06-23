#include<bits/stdc++.h>

using namespace std;
int n,m;
char a[105][105];
int di[4]={-1, 0, 0, 1};
int dj[4]={0, -1, 1, 0};
void check(int i, int j){
	a[i][j]='*';
	for(int k=0;k<4;k++){
		int imoi=i+di[k];
		int jmoi=j+dj[k];
		if((imoi >= 0 && jmoi >=0 && imoi < n && jmoi < m )&&(a[imoi][jmoi]=='O')){
			check(imoi,jmoi);
		}
	}
}

int main(){
	int  t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<m;i++){
			if(a[0][i] == 'O'){
				check(0, i);
			} 
		}
		for(int i=0;i<m;i++){
			if(a[n-1][i] == 'O'){
				check(n-1, i);
			} 
		}
		for(int i=0;i<n;i++){
			if(a[i][0] == 'O'){
				check(i, 0);
			} 
		}
		for(int i=0;i<n;i++){
			if(a[i][m-1] == 'O'){
				check(i, m-1);
			} 
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='O'){
					a[i][j]='X';
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]=='*'){
					a[i][j]='O';
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		
	}
	return 0;
}
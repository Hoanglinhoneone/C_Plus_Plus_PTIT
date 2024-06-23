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
		int h1=0,hc=n-1,c1=0,cc=m-1;
		while(h1<hc && c1<cc){
			int ptt=a[h1+1][c1];
			for(int i=c1;i<=cc;i++){
				int pts=a[h1][i];
				a[h1][i]=ptt;
				ptt=pts;
			}
			++h1;
			for(int i=h1;i<=hc;i++){
				int pts=a[i][cc];
				a[i][cc]=ptt;
				ptt=pts;
			}
			--cc;
			if(h1<=hc){
				for(int i=cc;i>=c1;i--){
					int pts=a[hc][i];
				    a[hc][i]=ptt;
				    ptt=pts;
				}
				--hc;
			}
			if(c1 <= cc){
				for(int i=hc;i>=h1;i--){
					int pts=a[i][c1];
					a[i][c1]=ptt;
					ptt=pts;
				}
				c1++;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}
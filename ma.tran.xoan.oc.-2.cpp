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
			for(int j=0;j<m;j++) cin >> a[i][j];
		}
		int h1=0,hc=n-1,c1=0,cc=m-1;
		vector<int> v;
		while(h1 <= hc && c1 <= cc){
			for(int i=c1 ; i<= cc;i++){
				v.push_back(a[h1][i]);//hang dau;
			}
			++h1;
			for(int i=h1;i<=hc;i++){
				v.push_back(a[i][cc]);//cot cuoi
			}
			--cc;
			if(h1 <= hc){
				for(int i=cc;i>=c1;i--){
					v.push_back(a[hc][i]);// hang cuoi;
				}
				--hc;
			}
			if(c1 <= cc){
				for(int i=hc;i>=h1;i--){
					v.push_back(a[i][c1]);//cot dau
				}
				++c1;
			}
		}
		for(int i=v.size()-1;i>=0;i--){
			cout << v[i] <<" ";
		}
		cout << endl;
	}
}
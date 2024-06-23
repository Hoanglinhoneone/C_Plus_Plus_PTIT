#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			cin >> a[i][j];
		}
		int maxall,maxh[n]={0},maxc[n]={0},maxhang=0,maxcot=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				maxh[i]+=a[i][j];
			}
			for(int j=0;j<n;j++){
				maxc[i]+=a[j][i];
			}
			maxcot=max(maxc[i],maxcot);
			maxhang=max(maxh[i],maxhang);
		}
		maxall=max(maxhang,maxcot);
		int dem = 0;
		if(maxall==maxhang){
			for(int i=0;i<n;i++){
				dem=dem+(maxall-maxh[i]);
			}
		}
		else if(maxall == maxcot){
			for(int i=0;i<n;i++){
				dem=dem+(maxall-maxc[i]);
			}
		}
		cout << dem << endl;
	}
}
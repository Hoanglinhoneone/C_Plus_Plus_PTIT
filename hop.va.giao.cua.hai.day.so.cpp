#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		int c[10000],d[100000];
		int dem=0;
		for(int i=0;i<n;i++){
			c[dem++]=a[i];
		}
		for(int i=0;i<m;i++){
			c[dem++]=b[i];
		}
		int tong=n+m;
		sort(c,c+tong);
		for(int i=0;i<=tong-1;i++){
			if(c[i]!=c[i+1]){
				cout << c[i] <<" " ;
			}
		}
		cout << endl;
		for(int i=0;i<tong;i++){
			d[c[i]]++;
		}
		for(int i=0;i<tong;i++){
			if(d[i]>=2){
				cout << i << " ";
			}
		}
		cout << endl ;
	}
}

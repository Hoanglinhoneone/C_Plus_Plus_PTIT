#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >>m;
		int a[n],b[m];
		int dem=0;
		int x=m+n;
		int c[x];
		for(int i=0;i<n;i++){
			cin >> a[i];
			c[dem++]=a[i];
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
			c[dem++]=b[i];
		}
		sort(c,c+x);
		for(int i=0;i<x;i++){
			if(c[i] != c[i+1]){
				cout << c[i] << " ";
			}
		}
		cout << endl;
		for(int i=0;i<x-1;i++){
			if(c[i] == c[i+1]){
				cout << c[i] << " ";
			}
		}
		cout << endl;
	}
}
		

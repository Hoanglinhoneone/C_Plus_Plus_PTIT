/*
2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1 1 1*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n-1;i++){
			if(a[i] != a[i+1]){
				cout << a[i] <<" "<< a[i+1] << endl;
				dem=1;
				break;
			}
		}
		if(dem==0){
			cout << -1 << endl;
		}
	}
}

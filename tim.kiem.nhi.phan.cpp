#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		nt a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int x=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==k){
				cout << 1 <<endl;
				x=1;
				break;
			}
		}
		if(x==0){
			cout << -1 << endl;
		}
	}
}

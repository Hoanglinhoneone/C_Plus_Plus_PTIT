/*2
7 2

1 1 2 2 2 2 3

7 4

1 1 2 2 2 2 3*/
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int dem=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==k){
				dem++;
			}
		}
		if(dem>0){
			cout << dem << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
}

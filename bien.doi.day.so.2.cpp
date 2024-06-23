#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=a[i];
		}
		for(int i=1;i<n-1;i++){
			a[i]=b[i-1]*b[i+1];
		}
		a[0]=b[0]*b[1];
		a[n-1]=b[n-1]*b[n-2];
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

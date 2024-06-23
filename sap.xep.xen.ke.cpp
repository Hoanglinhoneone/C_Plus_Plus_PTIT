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
		int b[1000];
		int x=0,y=1;
		for(int i=0;i<=n/2;i++){
			b[y]=a[i];
			y+=2;
		}
		for(int i=n-1;i>=n/2;i--){
			b[x]=a[i];
			x+=2;
		}
		for(int i=0;i<n;i++){
			cout << b[i] << " ";
		}
		cout << endl;
		
	}
}

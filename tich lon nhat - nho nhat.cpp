#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		long long a[n+1], b[m+1];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		sort(b, b+m);
		cout << a[n-1]*b[0] << endl;
	}
	
}
#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		long long a[n],b[m];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<m;i++){
			cin >> b[i];
		}
		int t=m+n;
		long long c[t];
		for(int i=0;i<t;i++){
			if(i<n){
				c[i]=a[i];
			}
			else{
				c[i]=b[i-n];
			}
		}
		sort(c,c+t);
		for(int i=0;i<t;i++){
			cout << c[i] << " ";
	    }
	    cout << endl;
	}
}

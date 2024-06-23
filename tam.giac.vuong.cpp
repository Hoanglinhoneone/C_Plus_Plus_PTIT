#include<bits/stdc++.h>

using namespace std;
long long kt(long long a, long long b ){
	long long c= a*a + b*b;
	long long v=sqrt(c);
	if(v*v==c) return v;
	return 0;
}

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
		sort(a, a + n);
		int ok=0;
		for(int i = 0; i < n-2 ; i++){
			for(int j=i+1;j<n-1;j++){
				long long v = kt(a[i],a[j]);
				if(v != 0 && binary_search(a + j, a + n, v) == 1){
					ok =1;
					break;
				}  
			}
		}
		if(ok == 1){
			cout << "YES" << endl;
		}
		if(ok == 0){
			cout << "NO" << endl;
		}
	}
	return 0;
}
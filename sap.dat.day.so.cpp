#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long  n;
		cin >> n ;
		long long a[n];
		long long b[100000]={-1};
		for(long i=0;i<n;i++){
			cin >> a[i];
		}
		for(long i=0;i<n;i++){
			b[i]=-1;
			for(long j=0;j<n;j++){
				if(i==a[j]){
				   b[i]=i;
				}
	    	}
	    }
	    for(long i=0;i<n;i++){
	    	cout << b[i] << " ";
		}
	    cout << endl;
	}
}

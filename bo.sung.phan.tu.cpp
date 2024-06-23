#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[10000];
		long long b[10000]={};
		for(long long i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		long long min=*min_element(a,a+n);
		long long max=*max_element(a,a+n);
		long long dem=0;
		for(long long i = min;i <= max;i++){
			if(!b[i]){
				dem++;
			}
		}
		cout << dem << endl;
		
	}
}

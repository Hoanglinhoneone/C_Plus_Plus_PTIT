#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(long long i=0;i<n;i++){
			cin >> a[i];
		}
		long long sum1=0,sum2=-1e9;
		for(long long i=0;i<n;i++){
			sum1+=a[i];
			sum2=max(sum1,sum2);
			if(sum1 < 0){
				sum1 =0;
			}
		}
		cout << sum2 << endl;
	}
}

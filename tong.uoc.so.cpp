#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long sum=0;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				sum+=i;
				long long j=n/i;
				if(j!=i) sum +=j;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
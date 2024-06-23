#include<bits/stdc++.h>

using namespace std;

long long check(long long n, long long k ){
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum += i%k;
	}
	if(sum == k){
		return 1;
	}
	else {
		return 0;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		cout << check(n,k) << endl;
	}
	return 0;
}

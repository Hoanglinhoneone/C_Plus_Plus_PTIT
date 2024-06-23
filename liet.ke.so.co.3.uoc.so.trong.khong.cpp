#include<bits/stdc++.h>

using namespace std;

int snt(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long l,r;
		cin >> l >> r;
		long long dem=0;
		for(long long i=2;i<=sqrt(r);i++){
			if(snt(i)){
				if(i*i >= l && i*i <= r){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}

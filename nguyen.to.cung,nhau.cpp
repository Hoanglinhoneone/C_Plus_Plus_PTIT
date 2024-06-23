#include<bits/stdc++.h>

using namespace std;
int snt(int n){
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
		int x;
		cin >> x;
		int dem=0;
		for(int i = 1;i<=x;i++){
			if(__gcd(i,x)==1){
				dem++;
			}
		}
		if(snt(dem)){
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

 int check(long long n){
 	if(n==0 || n == 1){
 		return 1;
	 }
	long long f0=0,f1=1,fn=1;
	while(fn<n){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	if(fn==n){
		return 1;
	}
	return 0;
 }
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
	if(check(n)){
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	}
}

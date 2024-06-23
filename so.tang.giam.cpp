#include<bits/stdc++.h>

using namespace std;

int snt(long long n){
	if(n<2){
		return 0;
	}
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int checkgiam(long long n){
	while(n >= 10){
		int x=n%10;
		n/=10;
		int y=n%10;
		if(x>=y){
			return 0;
		}
	}
	return 1;
}
int checktang(long long n){
	while(n>=10){
		int x=n%10;
		n/=10;
		int y=n%10;
		if(x<=y){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a=pow(10,n-1);
		long long b =pow(10,n);
		int dem=0;
		for(long long  i=a;i<b;i++){
			if( checkgiam(i)|| checktang(i)){
				if(snt(i)){
					dem++;
				}
			}
		}
		cout << dem << endl;
	}
}

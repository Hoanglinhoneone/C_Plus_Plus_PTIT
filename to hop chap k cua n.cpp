#include<iostream>

using namespace std;

int gt(int n){
	if(n==0){
		return 1;
	}
	else {
		int x=1;
		for(int i=1;i<=n;i++){
			x*=i;
		}
		return x;
	}
}
double C(int n,int k){
	return gt(n)/(gt(k)*gt(n-k));
}

int main(){
	int n,k;
	cin >> n >> k;
	if(k >= 1 && k <= n && n <= 25){
		cout << C(n,k);
	}
}

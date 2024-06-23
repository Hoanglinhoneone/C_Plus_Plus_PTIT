#include<iostream>
#include<math.h>

using namespace std;

int check(long long n){
	while(n>=10){
		int a=n%10;
		int b=(n/10)%10;
		n/=10;
		if(abs(a-b)!=1){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)==1){
			cout << "YES" << endl ;
		}
		else {
			cout << "NO" << endl;
		}
		
	}
	return 0;
}

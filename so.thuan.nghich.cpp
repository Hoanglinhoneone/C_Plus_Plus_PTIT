#include<iostream>

using namespace std;
int check(long long n){
	long long sum=0;
	long long m=n;
	while(n!=0){
		int x=n%10;
		sum = sum*10+x;
		n/=10;
	}
	if(sum==m){
		return 1;
	}
	else{
	return 0;
    }
}

int main(){
	int  t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)==1){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		
	}
	return 0;
}

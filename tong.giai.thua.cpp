#include<iostream>

using namespace std;
long long gt(long long n){
	if(n==0 || n==1 ){
		return 1;
	}
	else return n*gt(n-1);
}

int main(){
	long long n;
	cin >> n;
    long long sum =0 ;
    for(long long i=1;i<=n;i++){
    	sum += gt(i);
	}
	cout << sum;
	return 0;
}

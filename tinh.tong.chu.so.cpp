#include<iostream>

using namespace std;

long long n;
void rutgon(){
	int sum=0;
	while(n>0){
		int x=n%10;
		n/=10;
		sum = sum+x;
	}
	n=sum;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
	    while(n>=10){
	    	rutgon();
		}
		cout << n << endl;
	}
}

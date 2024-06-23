#include<bits/stdc++.h>

using namespace std;
int check(long long n){
	int tong=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			tong+=i;
			n/=i;
		}
	}
	if(n!=1) tong+=n;
	return tong;
}

int main(){
	long long n;
	cin >> n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=check(a[i]);
	}
	cout << sum;
	
}
#include<bits/stdc++.h>

using namespace std;

int snt(int n){
	if( n < 2){
		return 0;
	}
	else {
		for(int i=2;i<=sqrt(n);i++){
		    if(n % i ==0){
		    	return 0;
			}
		}
		return 1;
	}
}
int check(int n,int z){
	int sum=0;
	int dem=0;
	while(n>0){
		int x=n%10;
		dem++;
		if(snt(x)==0){
			return 0;
		}
		sum+=x;
		n/=10;
	}
	if(dem!=z){
		return 0;
	}
	if(snt(sum)==0){
		return 0;
	}
	return 1;
}
int main(){
	int n,z;
	cin >> n >>z;
	if(snt(n)==1){
		if(check(n)==1){
			cout << "YES" ;
		}
		else {
			cout << "NO";
		}
	}
}

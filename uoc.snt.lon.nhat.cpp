#include <bits/stdc++.h>

using namespace std;

int snt( long long n){
	if(n<2 || n % 2 ==0){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else {
		for( long long i=3;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}
 /*long long max( long long a,  long long b){
 	if(a>b){
 		return a;
	 }
	 else return b;
}
*/

int main(){
	int t;
	cin >> t;
	while(t--){
		 long long n;
		cin >> n;
		 long long Max=0;
		for( long long i =1;i<=sqrt(n);i++){
			if(n%i==0){
				 long long j= n/i;
				if(snt(i)){
					Max=max(Max,i);
				}
				if(snt(j)){
					Max=max(Max,j);
				}
			}
		}
		cout <<Max << endl;
	}
}

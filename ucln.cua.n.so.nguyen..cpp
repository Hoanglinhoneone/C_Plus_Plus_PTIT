#include<iostream>
#include<math.h>

using namespace std;
long long ucnl(long long a,long long b){
    while(a*b!=0){
    	if(a>b){
    		a%=b;
		}
		else{
			b%=a;
		}
	}
	return a+b;
}

long long check(long long a, long long b){
	return (a*b)/ucnl(a,b);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
	    long long a=1;
	    for(long long i=1;i<=n;i++ ){
	    	a=check(a,i);
		}
		cout << a << endl;
	}
}


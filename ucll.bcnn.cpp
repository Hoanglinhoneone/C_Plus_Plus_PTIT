#include<iostream>

using namespace std;
int GCD(long a,long b){
	if(a==0 || b ==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else {
			b-=a;
		}
	}
	return a;
}
int LCM(long a,long b){
	return a*b/(GCD(a,b));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long int a,b;
		cin >> a >> b;
        long x=GCD(a,b);
        long y=LCM(a,b);
        cout << y << " " << x << endl;
	}
}

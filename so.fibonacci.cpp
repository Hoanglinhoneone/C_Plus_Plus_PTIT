#include<iostream>

using namespace std;
void check(long long n){
	long long f0=0;
	long long f1=1;
	long long fn;
	if(n==0){
		cout << 0 << endl;
	}
	else if(n==1 || n==2){
		cout << 1 << endl;
	}
	else{
	for(int i=2;i<=n;i++){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	cout << fn << endl;
}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
	    check(n);
	}
}

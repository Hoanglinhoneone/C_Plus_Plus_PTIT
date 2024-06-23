#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	    long long n;
	    cin >> n;
	    if(n%8!=0 || n==0){
	    	cout << "-1" << endl;
		}
		else {
			long long x=5*n/8;
			long long y=n/4;
			long long z=n/8;
			cout << x << " " << y << " " << z << endl ;
		}
    }
}

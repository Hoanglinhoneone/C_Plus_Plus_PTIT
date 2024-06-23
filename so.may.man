#include<iostream>

using namespace std;
int check(long long n){
		int x=n%10;
		int y=(n/10)%10;
		if(x==6 && y == 8){
			return 1;
		}
		else return 0;
}

int main(){
	int t;
	cin >> t;
	while ( t--){
		long long n;
		if(check(n)==1){
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
}

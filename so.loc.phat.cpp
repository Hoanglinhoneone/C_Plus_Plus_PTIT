#include<iostream>

using namespace std;
int check(long long n){
	while(n!=0){
		int x=n%10;
		if(x != 0 && x!= 6 && x != 8){
			return 0;
		}
		n/=10;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)==1){
			cout <<"YES" <<endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

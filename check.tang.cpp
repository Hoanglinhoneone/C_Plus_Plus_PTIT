#include<bits/stdc++.h>

using namespace std;
int checkgiam(long long n){
	while(n >= 10){
		int x=n%10;
		n/=10;
		int y=n%10;
		if(x>y){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	if(checkgiam(n)){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}

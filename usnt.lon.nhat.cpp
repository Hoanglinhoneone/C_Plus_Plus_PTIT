#include<iostream>
#include<math.h>

using namespace std;
int snt(long long n){
	if(n<2){
		return 0;
	}
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(snt(n)){
			cout << n << endl;
		}
		else {
			for(int i=n/2;i>=2;i--){
				if(snt(i)==1 && n % i ==0){
					cout << i;
					break;
				}
			}
			cout << endl;
		}
	}
	return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
		long long n;
		cin >> n;
		int x = round(pow(n,1.0/3));
		if ( x * x * x == n){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		t--;
	}
}

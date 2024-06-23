#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long  a,x,y;
		cin >> a >> x >> y;
		long long ucln = __gcd(x,y);
		while(ucln--){
			cout << a ;
		}
		cout << endl;
	}
}

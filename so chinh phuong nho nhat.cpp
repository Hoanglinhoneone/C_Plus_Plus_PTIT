#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
	int n;
	cin >> n;
	ll res = n;
	for(int i = 2 ;i <= sqrt(n);i++){
		int cnt = 0;
		if(n%i == 0){
			while(n%i == 0){
				cnt++;
				n /= i;
			}
			if(cnt % 2 == 1){
				res *= i;
			}
		}
	}
	if(n!=1){
		res*=n;
	}
	cout << res;
}
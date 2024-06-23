#include<bits/stdc++.h>

using namespace std;
int x[15];
map<int , int> mp;
int check(int n){
	if(n == 0) return 1;
	if(mp[n]) return 1;
	for(int i = 9 ; i >= 2 ;i--){
		if(n >= i && check(n - x[i])){
            return mp[n] = 1;
		}
	}
	return mp[n] = 0;
}
int main(){
	int n; cin  >> n;
	x[1] = 1;
	for(int i = 2; i <= 9;i++){
		x[i] = x[i-1]*10+1;
	}
	if(check(n)){
		cout << "YES";
	}
	else cout << "NO";
}
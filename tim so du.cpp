#include<bits/stdc++.h>

using namespace std;
int xuly(int n, int x){
	int tich = 1;
	for(int i = 1 ;i<=x;i++){
		tich*=2;
		if(tich > n) return n;
	}
	return n%tich;
}
int main(){
	int n, x;
	cin >> n >> x;
	cout << xuly(n, x);
}
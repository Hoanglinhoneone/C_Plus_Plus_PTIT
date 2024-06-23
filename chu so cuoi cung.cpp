#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int bip(int p, int x){
	if(x == 0){
		return 1;
	}
	int x1 = bip(p, x/2);
	if(x1%2==0){
		return ((x1%10)*(x1%10))%10;
	}
	else return (((x1%10) *( x1%10))%10*(p%10))%10;
}
int main(){
	int p, x;
	cin >> p >> x;
	cout << bip(p, x);
	
}
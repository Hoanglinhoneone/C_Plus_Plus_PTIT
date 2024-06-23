#include<bits/stdc++.h>

using namespace std;
using ll = long long;

ll ucln(ll a, ll b){ 
    while(b){
    	ll tmp = a;
    	a = b;
    	b = tmp%b;
	}
	return a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		ll tich=a[n-1]*a[0];
		ll ucln1=a[0];
		for(int i=1;i<n-1;i++){
			tich*=a[i];
			ucln1=ucln(ucln1,ucln(a[i],a[i+1]));
		}
		for(int i=0;i<ucln1-1;i++){
			tich*=tich;
		}
		if(tich > 1)
		cout << tich << endl;
	}
}
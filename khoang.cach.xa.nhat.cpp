#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int max=INT_MIN;
		int l=0,r=n-1;
		while(l<r){
			if(a[l] <= a[r]){
				int x=r-l;
			}
			else l++;
			
		}
		cout << max << endl;
	}
}
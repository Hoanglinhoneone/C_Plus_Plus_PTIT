#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p;
		cin >> n >> p;
		int dem=0,i=1;
		while(p*i<=n){
			int tich=p*i;
			while(tich%p==0){
				tich/=p;
				dem++;
			}
			i++;
		}
		cout << dem << endl;
	}
}

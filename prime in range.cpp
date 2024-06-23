#include<bits/stdc++.h>

using namespace std;
const int maxn = (int)1e6;
int a[maxn];

void sang(){
	for(int i=2;i<=maxn;i++){
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for(int i=2;i<=sqrt(maxn);i++){
		if(a[i]){
			for(int j=i*i;j<=maxn;j+=i){
				a[j] = 0;
			}
		}
	}
}
int f[100006];
int main(){
	sang();
	int dem = 0;
	for(int i=0;i<=maxn;i++){
		if(a[i]){
			dem++;
		}
		f[i] =dem;
	}
	int q;
	cin >> q;
	while(q--){
		int l, r; cin >> l >> r;
		cout << f[r] - f[l-1]<<endl;
	}
}
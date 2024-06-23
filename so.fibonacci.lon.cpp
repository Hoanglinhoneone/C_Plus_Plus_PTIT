#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long d=1e9+7;
		int n;
		cin >> n;
		int f[1001];
		f[0]=0;
		f[1]=1;
		for(int i=2;i<=1000;i++){
			f[i]=(f[i-1]%d )+(f[i-2]%d);
		}
		cout << f[n] << endl;
	}
}

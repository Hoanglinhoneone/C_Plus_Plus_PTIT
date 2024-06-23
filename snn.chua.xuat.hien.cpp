#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n],b[100000]={0};
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		sort(a,a+n);
		for(int i=1;i<=n+1;i++){
			if(b[i] == 0 ){
				cout << i << endl;
				break;
			}
		}
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[1001];
		int sum=0;
		for(int i=0; i < n; i++){
			cin >> a[i];
		}
		for(int i=0; i<k;i++){
			sum+=a[i];
		}
		long long res=sum, index=0;
		for(int i=k; i<n; i++){
			sum = sum - a[i-k] +a[i];
			if(sum > res){
				res = sum;
				index= i-k+1;
			}	
		}
		cout << res << endl;
		for(int i=0;i<k;i++){
			cout << a[index + i] << " ";
		}
		cout << endl;
	}
}
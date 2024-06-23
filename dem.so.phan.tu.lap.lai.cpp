#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[100000]={0};
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		int sum =0;
		for(int i=0;i<100000;i++){
			if(b[i] > 1){
				sum += b[i];
			}
		}
		cout << sum << endl;;
		
	}
	return 0;
}

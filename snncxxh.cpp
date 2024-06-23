#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int min=1;
		for(int i=0;i<n;i++){
			if(a[i] < 0 ){
				a[i]=0;
			}
			if(a[i]==min){
				min++;
			}
		}
		cout << min <<endl;
	}
}

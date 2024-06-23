#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long sum=0;
		for(int i=1;i<=n/2;i++){
			if(n%i==0){
				sum+=i;
			}
		}
		if(sum==n){
			cout << "1" << endl;
		}
		else {
			cout << "0" <<endl;
		}
	}
}

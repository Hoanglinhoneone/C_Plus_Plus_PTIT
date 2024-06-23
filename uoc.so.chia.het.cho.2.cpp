#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		int q=0;
		cin >> n;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2==0){
					q++;
				}
				if((n/i) % 2 ==0){
					q++;
				}
				if(i*i==n && n % 2 ==0){
					q--;
				}
			}
		}
		cout << q << endl;
    }
}

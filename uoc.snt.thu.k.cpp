#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,i=2 ;
		int stt=0,vt;
		cin >> n >> vt; 
		while(n != 1){
			if(n % i==0){
				stt++;
				if(stt==vt){
					cout << i << endl;
				}
				else {
					n/=i;
				}
			}
			else {
				i++;
			}
		}
		if(vt > stt){
			cout << "-1" << endl;
		}
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y;
		long long p;
		cin >> x >> y >> p;
	    long long tich=1;
		for(int i=0;i<y;i++){
			tich =(tich*x)%p;
		}
		cout << tich << endl;
	}
}

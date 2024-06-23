#include<bits/stdc++.h>

using namespace std;
int sphenic(int n){
	int dem1=0;
	for(int i=2;i<=sqrt(n);i++){
		int dem=0;
		while(n%i==0){
			n/=i;
			dem++;
		}
		if(dem > 1 ){
			return 0;
		}
		if(dem==1) {
			dem1++;
		}	
	}
	if(n!=1){
		dem1++;
	}
	if(dem1==3){
		return 1;
	} else {
		return 0;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(sphenic(n)==1){
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
		
	}
}

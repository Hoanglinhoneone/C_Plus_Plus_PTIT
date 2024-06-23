#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				int dem=0;
				while(n%i==0){
					n/=i;
					dem++;
				}
				cout << i <<" " << dem << " ";
			}
			}
			if(n>1){
				cout << n << " " << 1 ;
		    }
		    cout << endl ;
	}
	return 0;
}


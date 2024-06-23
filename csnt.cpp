#include<iostream>
#include<math.h>

using namespace std;
int snt(int n){
	if(n<2){
		return 0;
	}
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int check=0;
		for(int i=2;i<=n/2;i++){
			if(snt(i) && snt(n-i)){
				cout << i << " " << n-i << endl;
				check=1;
				break;
			}
		}
		if(check==0){
			cout << -1;
		}
	}
	return 0;
	
}
 

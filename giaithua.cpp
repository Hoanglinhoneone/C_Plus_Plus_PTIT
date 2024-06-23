#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x=1;
	if(n >= 0 && n <= 12 ){
		if(n==0){
			cout << 1;
		}
		else{
		for(int i=1;i<=n;i++){
			x *= i;
		}
		   cout << x;
	    }
	}
}

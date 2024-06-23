#include<iostream>
#include<math.h>

using namespace std;

int chia(int n){
	int chan=0;
	int le=0;
	while(n!=0){
		int x=n%10;
		if(x%2==0){
			chan++;
		}
		else {
			le++;
		}
		n/=10;
	}
	if(chan==le){
		return 1;
	}
	else {
		return 0;
	}
}

int main(){
	int n;
	cin >> n;
	int a=pow(10,n-1);
	int b=pow(10,n);
	int dem=0;
	for(int i=a;i<b;i++){
		if(chia(i)==1){
			cout << i << " " ;
			dem++;
		}
		if(dem%10==0){
			cout << endl;
		}
	}
	return 0;
}

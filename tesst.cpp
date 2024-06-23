#include<bits/stdc++.h>

using namespace std;
int n,a[100],check;
void tao(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void Sinhcauhinh(){
	int i=n;
	while(i >= 1 && a[i] == 1){
		i--;
		a[i]=0;
	}
	if(i==0){
		check = 0;
	}
	else {
		a[i]=1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		check=1;
		tao();
		while(check){
			for(int i=1;i<=n;i++){
				cout << a[i] ;
			}
			cout <<" ";
			Sinhcauhinh();
		}
	}
	cout << endl;
}
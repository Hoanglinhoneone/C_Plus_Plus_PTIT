#include<bits/stdc++.h>

using namespace std;
int fibonacci(int n){
	if(n==0 || n == 1){
		return 1;
	}
	int f0=0,f1=1,fn=1;
	while(fn<n){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	if(fn==n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int b[1000];
		int x=0;
		for(int i=0;i<n;i++){
			if(fibonacci(a[i])){
				b[x++]=a[i];
			}
		}
		for(int i=0;i<x;i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}

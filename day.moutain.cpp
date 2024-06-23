#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int m){
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
}
int check(int a[],int l,int r){
	int d=0,c=0,t=0,b=0,x;
	for(int i=l;i<r;i++){
		if(a[i] != a[i+1]){
			b=1;
		}
	}
	if(b==0){
		return 1;
	}
	for(int i=l;i<r;i++){
		if(a[i] > a[i+1]){
			t=1;
		}
	}
	if(t==0){
		return 1;
	}
	for(int i=l;i<r;i++){
		if(a[i] < a[i+1]){
			d=1;
			x=i+1;
		}
	}
	if(d==0){
		return 1;
	}
	if(d==1){
		for(int i=x;i<r;i++){
			if(a[i] < a[i+1]){
				c=1;
			}
		}
	}
	if(d==1 && c==0){
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
		nhap(a,n);
		int l,r;
		cin >> l >> r;
		if(check(a,l,r)==1){
			cout << "Yes" << endl;
		}
		else cout << "No" << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

int tang(int a[],int l,int r){
	for(int i=l;i<r;i++){
		if(a[i] > a[i+1]){
			return 0;
		}
	}
	return 1;
}
int giam(int a[],int l,int r){
	for(int i=l;i<r;i++){
		if(a[i] < a[i+1]){
			return 0;
		}
	}
	return 1;
}
int tanggiam(int a[],int l,int r){
	string s="";
	for(int i=l;i<r;i++){
		if(a[i]<a[i+1]){
			s+="1";
		}
		if(a[i] > a[i+1]){
			s+="0";
		}
	}
	if(s.find("01") != -1){
		return 0;
	}
	else {
    	return 1;
    }    
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
		int l,r;
		cin >> l >> r;
		if(giam(a,l,r) == 1 || tang(a,l,r)==1 || tanggiam(a,l,r)==1){
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
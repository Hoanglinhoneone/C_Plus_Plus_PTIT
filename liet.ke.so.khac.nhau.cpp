#include<bits/stdc++.h>

using namespace std;
void xoa(int n,int a[100],int vt){
	for(int i=vt;i<n-1;i++){
		a[i]=a[i+1];
	}
	--n;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
			if(a[i] < a[i+1] ){
				cout << a[i] << " ";
			}
	}
}

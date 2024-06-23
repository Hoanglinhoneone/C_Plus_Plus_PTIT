#include<bits/stdc++.h>

using namespace std;

int main(){
	int  t;
	cin >> t;
	while(t--){
		int n,vt1,vt2;
		cin >> n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
			  vt1=i+1;
			}
		}
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				vt2=i+1;
			}
		}
		cout << vt2 << " " << vt1<< endl;
		
	}
}

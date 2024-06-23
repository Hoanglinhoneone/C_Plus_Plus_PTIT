#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,X;
		cin >> n >> X;
		int a[n];
		int b[100000],x=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int y=abs(X-a[i]);
				int z=abs(X-a[j]);
				
				    if(y>z){
					    int t=a[i];
					    a[i]=a[j];
					    a[j]=t;
     			}
     		}
			cout << a[i] << " ";
	   }
		cout << endl;
	}
}

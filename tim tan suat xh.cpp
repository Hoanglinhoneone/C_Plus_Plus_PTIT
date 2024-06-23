#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int dem=1,vitri;
	for(int i=0;i<n;i++){
	    for(int j=i;j<=n;j++){
	    	if(a[i]==a[j]){
	    		dem++;
			}
		}
		if(dem % 2 != 0){
			vitri = a[i];
		}
	}
	cout << vitri;	
}

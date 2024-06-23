#include<bits/stdc++.h>

using namespace std;

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
		int max1=-1e10;
		for(int i=0;i<n-1;i++){
			int max2=-1e10;
			for(int j=i+1;j<n;j++){
				int hieu =a[j]-a[i];
				if(hieu >= max2){
					max2=hieu;
				}
			}
			if(max2 >= max1){
				max1=max2;
			}
		}
		cout << max1 << endl;
	}
}

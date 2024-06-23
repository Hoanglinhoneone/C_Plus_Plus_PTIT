#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a1[n],a2[n];
		for(int i=0;i<n;i++){
			cin >> a1[i];
		}
		for(int i=0;i<n;i++){
			cin >> a2[i];
		}
		int maxl=0;
		for(int i=0;i<n;i++){
			int suma1=0,suma2=0;
			for(int j=i;j<n;j++){
				suma1+=a1[j];
				suma2+=a2[j];
				if(suma1==suma2){
					maxl=max(j-i+1,maxl);
				}
			}
		}
		cout << maxl << endl;
	}
}
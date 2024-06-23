/*
Input:

Output:

2
5
4 5 1 2 1
6
10 20 30 30 20 5 7
*/
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
		int min=1e9;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					if(min > j){
						min = j;
					}
				}
			}
		}
		if(min == 1e9){
			cout << -1 << endl;
		}
		else {
			cout << a[min] << endl;
		}
	}
}

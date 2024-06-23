#include<bits/stdc++.h>

using namespace std;
int x[100000]={0};
bool sx(int a, int b){
	if(x[a] != x[b]){
		return x[a] > x[b];
	}
	return a < b;
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
			x[a[i]]++;
		}
		sort(a, a + n, sx);
		for(int i=0 ;i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	    for(int i=0;i<100000;i++){
	    	x[i]=0;
		}
	}
}
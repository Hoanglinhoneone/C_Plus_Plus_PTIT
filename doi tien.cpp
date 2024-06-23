#include<bits/stdc++.h>

using namespace std;
void chiatien(int n, int a[]){
	int cnt = 0;
	for(int i = 9 ; i >= 0;i--){
		if(n >= a[i]){
			while(n >= a[i] && n > 0 ){
				cnt++;
				n -= a[i];
			}
		}
	}
	cout << cnt << endl;
}
int main(){
	int a[10];
	a[0] = 1, a[1] = 2, a[2] = 5, a[3] = 10, a[4] = 20; 
	a[5] = 50, a[6] = 100,a[7]=200,a[8]=500,a[9]=1000;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		chiatien(n, a);
	}
}
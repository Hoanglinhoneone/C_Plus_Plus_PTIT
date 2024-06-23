#include<bits/stdc++.h>

using namespace std;
int n,x;
bool sx(int a,int b){
	return abs(x-a) < abs(x-b);
}
void sapxep(){
	cin >> n >> x;
		int a[n+5];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		stable_sort(a, a + n, sx);
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
}

int main(){
	int t ;
	cin >> t;
	while(t--){
		sapxep();
	}
	return 0;
}
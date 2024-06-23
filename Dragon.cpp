#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, s;
	cin >> n >> s;
	int a[n], b[10000]={0};
	for(int i=0;i<n;i++){
		int yi;
		cin >> a[i];
		cin >> yi;
		b[a[i]] = yi;
	}
	sort(a, a+n);
	for(int i=0;i<n;i++){
		if(a[i] >= s){
			cout << "NO";
			return 0;
		}
		else {
			s+=b[a[i]];
		}
	}
	cout << "YES";
}
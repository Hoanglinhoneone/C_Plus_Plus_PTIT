#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int sum=0;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
		
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout <<endl<< sum << endl;
	
}
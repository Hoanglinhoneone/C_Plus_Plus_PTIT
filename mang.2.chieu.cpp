
#include<bits/stdc++.h>

using namespace std;

// Mang 2 chieu

// ham nhap mang 2 chieu:
void nhap(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	} 
}
// ham xuat mang 2 chieu:
void xuat(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	} 
}
int main(){
	// khai bao:
	int n,m;
	cin >> n >> m;
	int a[n][m]; //m*n phan tu
	// nhap ma tran:
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	} 
	// in ma tran:
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	} 
	// Mang vector:
	// Khai bao:
	vector<int> a[n];
	for(int i=0;i<n;i++){
		int x,cin >> x;
		for(int j=0;j<m;j++){
			a[i].push_back(x);//them phan tu vao tung dong cho mang vector
		}
	}
	// in mang vector:
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i].size();j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
	
	// mang ky tu:
	// khai bao:
	string a[n];
	// nhap mang ky tu:
	for(int i=0;i<n;i++){
		getline(cin ,a[i]);
	}
	// xuat mang ky tu:
	for(int i=0;i<n;i++){
		cout << a[i]<< endl;
	}
	
	
}
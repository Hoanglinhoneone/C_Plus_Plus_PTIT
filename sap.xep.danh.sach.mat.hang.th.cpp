#include<bits/stdc++.h>
/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/
using namespace std;
using db = double;
int dem=1;
struct danhsach{
	int mmh;
	string tmh,nh;
	db gm, gb, ln;
};

void nhap(danhsach &a){
	a.mmh=dem;
	dem++;
	getline(cin, a.tmh);
	getline(cin, a.nh);
	cin >> a.gm >> a.gb;
	cin.ignore();
	a.ln= a.gb-a.gm;
}
void in(danhsach a){
	cout << a.mmh << " " << a.tmh << " " << a.nh << " " << fixed << setprecision(2) << a.ln <<endl;
}
bool sx(danhsach a, danhsach b){
	return a.ln > b.ln;
}
void sapxep(danhsach a[], int n){
	sort(a, a+n, sx);
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	danhsach a[n];
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
	sapxep(a, n);
	for(int i=0;i<n;i++){
		in(a[i]);
	}
	return 0;
}
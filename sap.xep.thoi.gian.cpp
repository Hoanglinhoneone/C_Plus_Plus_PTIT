#include<bits/stdc++.h>

using namespace std;
using ll=long long;

struct thoigian{
	ll gio,phut,giay;
	ll tong;
};
void nhap(thoigian a[], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].gio >> a[i].phut>> a[i].giay;
	    a[i].tong=a[i].gio*3600+a[i].phut*60+a[i].giay;
    }
}

void xuat(thoigian a[],int n){
	for(int i=0;i<n;i++){
        cout << a[i].gio <<" " << a[i].phut <<" " << a[i].giay << endl;
    }
}
bool sx(thoigian a, thoigian b){
	return a.tong < b.tong;
}
void sapxep(thoigian a[],int n){
	sort(a, a+n, sx);
}

int main(){
    int n;
    cin >> n;
	struct thoigian a[n];
	nhap(a, n);
	sapxep(a, n);
	xuat(a, n);
}
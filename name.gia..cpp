#include<bits/stdc++.h>
// 01/01/2002
// 0123456789
using namespace std;
struct tuoi{
	string ten,date;
    long long tong;
};
void nhap(tuoi a[], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].ten >> a[i].date;
	    string name ="";
	    name = a[i].ten[6]+a[i].ten[7]+a[i].ten[8]+a[i].ten[9]+a[i].ten[3]+a[i].ten[4]+a[i].ten[0]+a[i].ten[1];
	    a[i].tong=stoll(name);
    }
}
void xuat(tuoi a[], int n){
	cout << a[n-1].ten << endl;
	cout << a[0].ten << endl;	
}
bool sx(tuoi a,tuoi b){
	return a.tong < b.tong;
}
void sapxep(tuoi a[], int n){
	sort(a, a+n, sx);
}

int main(){
	int n;
	cin >> n;
	struct tuoi a[n];
	nhap(a, n);
	sapxep(a, n);
	xuat(a, n);
	
}

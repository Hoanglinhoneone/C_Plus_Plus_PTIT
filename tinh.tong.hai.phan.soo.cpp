#include<bits/stdc++.h>

using namespace std;
struct PhanSo{
	long long tu,mau;
};
long long rutgon(PhanSo &a){
	long long x=__gcd(a.tu,a.mau);
	a.tu=x/a.tu;
	a.mau=x/a.mau;
}
void nhap(PhanSo &a,PhanSo &b){
	cin >> a.tu >> a.mau >> b.tu >> b.mau;
}
void in(PhanSo a){
	cout << a.tu<<"/"<<a.mau;
}
PhanSo tong(PhanSo &a,PhanSo &b){
	long long x=__lcm(a.mau,b.mau);
	a.tu=x/a.mau*a.tu;
	b.tu=x/b.mau*b.tu;
	a.tu=a.tu+b.tu;
	a.mau=x;
	rutgon(a);
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

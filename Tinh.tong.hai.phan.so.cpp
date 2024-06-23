#include<bits/stdc++.h>

using namespace std;
using ll=long long;
struct PhanSo{
	ll tu,mau;
};
void nhap(PhanSo &a){
	cin >> a.tu >> a.mau;
}
void in(PhanSo a){
	cout << a.tu <<"/"<<a.mau;
}
PhanSo tong(PhanSo a,PhanSo b){
	PhanSo c;
	c.tu=a.tu*b.mau+b.tu*a.mau;
	c.mau=a.mau*b.mau;
	ll x=__gcd(c.tu,c.mau);
	c.tu/=x;
	c.mau/=x;
	return c;
}


int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
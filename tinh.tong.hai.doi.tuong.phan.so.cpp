#include<bits/stdc++.h>

using namespace std;
using ll=long long;
struct PhanSo{
	ll tu,mau;
	PhanSo(ll a,ll  b){
		a=tu;
		b=mau;
	}
	//insertion:
	friend istream& operator >>(istream& in,PhanSo &a);
	friend PhanSo operator + (const PhanSo a,const PhanSo b){
		PhanSo tong(1,1);
		tong.tu=a.tu*b.mau+b.tu*a.mau;
		tong.mau=a.mau*b.mau;
		ll x=__gcd(tong.tu,tong.mau);
		tong.tu /= x;
		tong.mau /= x;
		return tong;
	}
	//extraction:
	friend ostream& operator << (ostream& out,PhanSo a);
};
istream& operator >>(istream& in,PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}
ostream& operator <<(ostream& out,PhanSo a){
	out << a.tu <<"/"<< a.mau;
	return out;
}

int main(){
	PhanSo p(1,1),q(1,1);
	cin >> p >> q;
	cout << p+q;
	return 0;
	
}
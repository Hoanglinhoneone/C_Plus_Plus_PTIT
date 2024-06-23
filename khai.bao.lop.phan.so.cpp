#include<bits/stdc++.h>

using namespace std;
using ll=long long;
struct PhanSo{
	ll tu,mau;
	PhanSo(ll a,ll b){
		a=tu;
		b=mau;
	}
	friend istream& operator >>(istream& in,PhanSo &a){
		in >> a.tu >> a.mau;
		return in;
	}
	friend ostream& operator << (ostream& out, PhanSo a){
		out << a.tu << "/" << a.mau;
		return out;
	}
	void rutgon(){
		ll x=__gcd(tu,mau);
		tu/=x;
		mau/=x;
	}
};

int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;	
}
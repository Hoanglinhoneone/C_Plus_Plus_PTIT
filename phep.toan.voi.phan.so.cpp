	#include<bits/stdc++.h>
	
	using namespace std;
	using ll=long long;
	struct PhanSo{
		ll tu,mau;
	};
	
	void rutgon(PhanSo &a){
	    ll x=__gcd(a.tu,a.mau);
	    a.tu/=x;
	    a.mau/=x;
	}
	void process(PhanSo a, PhanSo b){
		PhanSo c;
		PhanSo d;
		c.tu=a.tu*b.mau+b.tu*a.mau;
		c.mau=a.mau*b.mau;
		c.tu=pow(c.tu,2);
		c.mau=pow(c.mau,2);
		rutgon(c);
		cout << c.tu <<"/"<<c.mau<<" ";
		d.tu=a.tu*b.tu*c.tu;
		d.mau=a.mau*b.mau*c.mau;
		rutgon(d);
		cout << d.tu <<"/"<<d.mau<< endl;
	}
	int main(){
		int t;
		cin >> t;
		while(t--){
		    PhanSo A;
		    PhanSo B;
		    cin >> A.tu >> A.mau >> B.tu >> B.mau;
		    process(A, B);
	    }
	}
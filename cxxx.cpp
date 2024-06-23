#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    while(a*b!=0){
        if(a>b) a%= b;
        else b%= a; 
    }
    return a+b;
}

class PhanSo{
    private:
        ll tu , mau;

    public:
        PhanSo(ll t, ll m){
            this->tu = t;
            this->mau = m;
        }
        void rutgon();
        friend istream& operator >> (istream &in , PhanSo &a);
        friend ostream& operator << (ostream &out , PhanSo a);
        friend PhanSo operator + ( PhanSo a, PhanSo b){
            PhanSo c(1,1);
            c.tu = a.tu*b.mau + a.mau*b.tu;
            c.mau = a.mau*b.mau;
            c.rutgon();
            return c;
        }
};

istream& operator >> (istream &in , PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}
ostream& operator << (ostream &out , PhanSo a){
    out << a.tu << "/" << a.mau << endl;
    return out;
}

void PhanSo::rutgon(){
    ll x = gcd(tu , mau);
    this->tu = this->tu/x;
    this->mau = this->mau/x;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
#include<bits/stdc++.h>

using namespace std;
struct PhanSo{
	long long a,b;
};
void nhap(PhanSo &s){
	cin >> s.a>> s.b;
}
void rutgon(PhanSo &s){
	long long x=__gcd(s.a,s.b);
	s.a /=x;
	s.b /=x;
}
void in(PhanSo s){
	cout << s.a << "/" <<s.b ;
}

int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
	
}

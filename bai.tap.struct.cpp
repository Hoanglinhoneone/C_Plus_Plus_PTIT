#include<bits/stdc++.h>

using namespace std;
struct tongluong{
    string mnv, name;
    double hsl,lcb,pc, tong;
};
void Nhap(tongluong &a){
	cin >> a.mnv;
	cin.ignore();
	getline(cin,a.name);
	cin >> a.hsl >> a.lcb >> a.pc;
	a.tong = a.lcb*a.hsl+a.pc;
}
void Xuat(tongluong a){
	cout << "Tong luong cua ban la:" << endl;
	cout <<fixed << setprecision(2)<< a.tong << endl;
}
int main(){
	struct tongluong a;
	tongluong *ptr = new tongluong;
	Nhap(*ptr);
	Xuat(*ptr);
	return 0;
}
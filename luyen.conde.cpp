#include<bits/stdc++.h>
/*
VIETTEL
TAP DOAN VIEN THONG QUAN DOI VIETTEL
40
FSOFT
CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
300
VNPT
TAP DOAN BUU CHINH VIEN THONG VIET NAM
200
SUN
SUN*
50
*/
using namespace std;
class DoanhNghiep{
	private:
		string mdn, tdn;
		int ssv;
	public :
		friend istream &operator >>(istream  &in, DoanhNghiep&);
		friend ostream &operator << (ostream &out, DoanhNghiep);
		int getssv(){
			return this->ssv;
		}
		string getmdn(){
			return this->mdn;
		}
};
istream &operator >>(istream &in, DoanhNghiep &a){
	in >> a.mdn ;
	cin.ignore();
	getline(in, a.tdn);
	in >> a.ssv;
	return in;
}
ostream &operator << (ostream &out, DoanhNghiep a){
	out << a.mdn << " " << a.tdn << " " << a.ssv << endl;
	return out;
}
bool sx(DoanhNghiep a, DoanhNghiep b){
	if(a.getssv() == b.getssv()) return a.getmdn() < b.getmdn();
	return a.getssv() > b.getssv();
}
void sapxep(DoanhNghiep a[], int n){
	sort(a, a+n,sx);
}
int main(){
	int n;
	cin >> n;
	DoanhNghiep a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sapxep(a, n);
	int x,c,d;
	cin >> x; 
	while(x--){	
	    cin >> c >> d;
	    cout << "DANH SACH DOANH NGHIEP NHAN TU " << c << " DEN " << d << " SINH VIEN:" << endl;
    	for(int i=0;i<n;i++){
	    	if(a[i].getssv() >= c && a[i].getssv() <= d){
		    	cout << a[i] << endl;
	    	}
    	}
    }
    return 0;
}
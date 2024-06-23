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

class doanhnghiep{
	private:
	    string mdn, tdn;
	    int sv;
	public:
		friend istream &operator >> (istream &in, doanhnghiep &a){
			in >> a.mdn;
			cin.ignore();
			getline(in, a.tdn);
			in >> a.sv;
			return in;
		}
		friend ostream &operator << (ostream &out, doanhnghiep a){
			out << a.mdn << " " << a.tdn << " " << a.sv << endl;
			return out;
		}
		int getSv();
		string getMdn();
};
string doanhnghiep::getMdn(){
	return this->mdn;
}
int doanhnghiep::getSv(){
	return this->sv;
}
bool sx(doanhnghiep a, doanhnghiep b){
	if(a.getSv()==b.getSv()){
		return a.getMdn() < b.getMdn();
	}
	return a.getSv() > b.getSv();
}
void sapxep(doanhnghiep a[], int n){
	sort(a, a + n, sx);
}
int main(){
	int n;cin >> n;
	class doanhnghiep a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n, sx);
    int q; cin >> q;
    while(q--){
    	int x,y; cin >> x >> y;
    	cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:" << endl;
    	for(int i=0;i<n;i++){
    		if(a[i].getSv() >= x && a[i].getSv() <= y){
    			cout << a[i];
			}
		}
	}
}
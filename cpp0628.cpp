#include<bits/stdc++.h>

using namespace std;
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
class DoanhNghiep{
	private:
		string mdn, tdn;
		int sl;
	public:
		friend istream &operator >> (istream &in, DoanhNghiep &a){
			in >> a.mdn;
	        cin.ignore();
	        getline(in, a.tdn);
	        in >> a.sl;
	        return in;
		};
		friend ostream &operator << (ostream &out, DoanhNghiep a){
			out << a.mdn << " " << a.tdn << " " << a.sl << endl;
        	return out;
		};
		int getSl(){
			return sl;
		}	
};
//istream &operator >> (istream &in, DoanhNghiep &a){
//	in >> a.mdn;
//	in.ignore();
//	getline(in, a.tdn);
//	in >> a.sl;
//	return in;
//}
//ostream &operator << (ostream &out, DoanhNghiep a){
//	out << a.mdn << " " << a.tdn << " " << a.sl << endl;
//	return out;
//}
bool sx(DoanhNghiep a,DoanhNghiep b){
	return a.getSl() > b.getSl();
}
void sapxep(DoanhNghiep a[], int n){
	sort(a, a+n,sx);
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	DoanhNghiep ds[n];
	
	for(int i=0; i<n;i++){
		cin >> ds[i];
	}
	sapxep(ds, n);
	for(int i=0;i<n;i++){
		cout << ds[i];
	}
    return 0;
}
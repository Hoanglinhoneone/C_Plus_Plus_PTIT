#include<bits/stdc++.h>
/*
B16DCCN001
nguyen trong duc anh
d16cnpm1
sv1
B15DCCN215
to ngoc hieu
d15cnpm3
sv2
B15DCKT150
nguyen ngoc son
d15cqkt02-b
sv3
B15DCKT199
nguyen trong tung
d15cqkt02-b
sv4
*/

using namespace std;
class sinhvien{
	private:
		string msv, ten, lop, email, khoa;
	public:
		string getKhoa();
		friend istream &operator >> (istream &in, sinhvien &a){
			in >> a.msv;
			cin.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			a.khoa = a.lop[1]+a.lop[2];
			return in;
		}
		friend ostream &operator << (ostream &out, sinhvien &a){
			out << a.msv << " " << a.ten << " " << a.lop <<" " << a.email << endl;
			return out;
		}
};
string sinhvien::getKhoa(){
	return this->khoa;
}

int main(){
	int n;
	cin >> n;
	struct sinhvien a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int q;cin >> q;
	while(q--){
		string s;
		cin >> s;
		string ss="";
		ss=s[2]+s[3];
		cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
		for(int i=0;i<n;i++){
			if(ss == a[i].getKhoa()){
				cout << a[i] ;
			}
		}
	}
	return 0;
}
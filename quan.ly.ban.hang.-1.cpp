#include<bits/stdc++.h>

using namespace std;
/*
2
Nguyen Van Nam
Nam
12/12/1997
Mo Lao-Ha Dong-Ha Noi
Tran Van Binh
Nam
11/14/1995
Phung Khoang-Nam Tu Liem-Ha Noi
2
Ao phong tre em
Cai
25000
41000
Ao khoac nam
Cai
240000
515000
3
KH001 MH001 2
KH001 MH002 3
KH002 MH002 4
*/
class KhachHang{
	private:
		string mkh, name, gt, ns, dc;
	static int x1;
	public:
		friend istream& operator >> (istream &in, KhachHang &a);
		string getMkh(){
			return mkh;
		}
		string getName(){
			return name;
		}
		string getDc(){
			return dc;
		}
};
int KhachHang:: x1 = 1;
istream &operator >> (istream &in, KhachHang &a){
	string s="KH";
	a.mkh= s + string(3-to_string(a.x1).size(), '0') + to_string(a.x1);
	a.x1++;
	cin.ignore();
	getline(in,a.name);
	in >> a.gt >> a.ns;
    cin.ignore();
    getline(in, a.dc);
    return in;  	
}
class MatHang{
	private:
		string mmh, tmh, dvt;
		int gm, gb;
	static int x2;
	public:
		friend istream& operator >> (istream &in, MatHang &a);
		string getMmh(){
			return mmh;
		}
		string getTmh(){
			return tmh;
		}
		string getDvt(){
			return dvt;
		}
		int getGm(){
			return gm;
		}
		int getGb(){
			return gb;
		}
};

int MatHang::x2=1;

istream &operator >>(istream &in, MatHang &a){
	string s="MH";
	a.mmh = s + string(3-to_string(a.x2).size(), '0') + to_string(a.x2);
	a.x2++;
	cin.ignore();
	getline(in, a.tmh);
	in >> a.dvt >> a.gm >> a.gb;
	return in;
}

class HoaDon: public KhachHang, MatHang{
	private:
		int sd;
	    string mhd, makh, mamh;
	    int sl;
	static int x3;
	public:
		friend istream& operator >>(istream &in, HoaDon &a);
		friend ostream& operator <<(ostream &out, HoaDon a);
};
int HoaDon::x3=1;

istream &operator >> (istream &in, HoaDon &a){
	string s="HD";
	a.mhd = s + string(3-to_string(a.x3).size(), '0') + to_string(a.x3);
	a.x3++;
	in >> a.makh >> a.mamh >> a.sl;
	return in;
}

ostream &operator << (ostream &out, HoaDon a){
//	out << a.mhd << " " << a.getName() << " " << a.getDc() << " " << a.getTmh() << " " << a.getDvt() << " " << a.getGm();
//	out << " " << a.getGb() << " " << a.sl << " " << a.getGb()*a.sl << endl;
out << a.getName() << " " << a.getDc() <<" "<< a.getTmh() << " "<< a.getDvt() << endl;
	return out;
}
int main(){
	KhachHang dskh[25];
	MatHang dsmh[45];
	HoaDon dshd [105];
	int N, M, K, i;
	cin >> N;
	for(i = 0; i < N; i++) cin >> dskh[i];
	cin >> M;
	for(i = 0; i < M; i++) cin >> dsmh[i];
	cin >> K;
	for(i = 0; i < K; i++) cin >> dshd[i];
	
	for(i = 0; i < K; i++) cout << dshd[i];
}
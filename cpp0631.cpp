#include<bits/stdc++.h>
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
using namespace std;
class Kh{
	public:
		string mkh,tkh,gt,ns,dc;
		Kh() {
			mkh="";
			tkh=gt=ns=dc="";
		}
};
class Mh{
	public:
		string mmh, tmh, dvt;
		int gm, gb;
	Mh() {
		mmh = "";
		tmh = dvt = "";
		gm = gb = 0;
	}
};

Kh KH[25];
Mh MH[45];
class KhachHang{
	public:
		string mkh, name, gt, ns, dc;
		KhachHang() {
			mkh = "KH";
			name = gt = ns = dc = "";
		}
		friend istream& operator >> (istream &in, KhachHang &a);
};
int x1=0;
istream &operator >> (istream &in, KhachHang &a){
	x1++;
	a.mkh+=string(3-to_string(x1).size(), '0') + to_string(x1);
	KH[x1-1].mkh = a.mkh;
	if(x1 == 1 ) cin.ignore();
	getline(in,a.name);
	KH[x1-1].tkh = a.name;
	getline(in,a.gt);
	getline(in,a.ns);
	getline(in, a.dc);
	KH[x1-1].gt=a.gt;
	KH[x1-1].ns=a.ns;
    KH[x1-1].dc=a.dc;
    return in;  	
}
class MatHang{
	
	public:
		string mmh, tmh, dvt;
		int gm, gb;
		MatHang() {
			mmh = "MH";
			tmh = dvt = "";
			gm = gb = 0;
		}
		friend istream& operator >> (istream &in, MatHang &a);
};
int x2=0;
istream &operator >>(istream &in, MatHang &a){
	x2++;
	a.mmh +=string(3-to_string(x2).size(), '0') + to_string(x2);
	MH[x2-1].mmh=a.mmh;
	cin.ignore();
	getline(in, a.tmh);
	MH[x2-1].tmh=a.tmh;
	in >> a.dvt >> a.gm >> a.gb;
	MH[x2-1].dvt = a.dvt;
	MH[x2-1].gm=a.gm;
	MH[x2-1].gb=a.gb;
	return in;
}
class HoaDon
{
	public:
		int sl;
	    string mhd, mkh, mmh;
	    HoaDon() {
		mhd = "HD";
		mkh = mmh = "";
		sl = 0;
		}
		friend istream& operator >>(istream &in, HoaDon &a);
		friend ostream& operator <<(ostream &out, HoaDon a);
};
int x3=0;

istream &operator >> (istream &in, HoaDon &a){
    x3++;

	a.mhd +=  string(3-to_string(x3).size(), '0') + to_string(x3);
	in >> a.mkh >> a.mmh >> a.sl;
	return in;
}
ostream &operator << (ostream &out, HoaDon a){

	out << a.mhd << " ";
	for(int i=0;i<x1;i++){
		if(a.mkh == KH[i].mkh){
		    out << KH[i].tkh << " " << KH[i].dc;
		}
	}
	  int xx=0;
	for(int i=0;i<x2;i++){
		if(a.mmh == MH[i].mmh){
			out <<" "<< MH[i].dvt << " " << MH[i].gm <<" "<< MH[i].gb << " "<< a.sl;
			xx = i;
		} 
	}
	out <<" "<< MH[xx].gb*a.sl<<endl;
	return out;
}

int main(){
	KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    	cin >> K;
	for(i = 0; i < K; i++) cin >> dshd[i];
	for(i = 0; i < K; i++) cout << dshd[i];
}
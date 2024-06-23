#include<bits/stdc++.h>

using namespace std;
typedef struct Monhoc{
	string mmh, tmh;
	double  tc, cc, kt, thi, gpa;
};
struct Sinhvien{
	struct Monhoc *dsMH;
	string msv, name, lop;
	double gpafull;
	int k;
};
void nhapmh(Monhoc a){
	getline(cin, a.mh.mmh);
	getline(cin, a.mh.tmh);
	cin >> a.mh.tc;
}
void nhapsv(Sinhvien a){
	cin >> a.msv;
	cin.ignore();
	getline(cin, a.name);
	cin >> a.lop >> a.k;
}
void nhapcs(Sinhvien a){
	getline(cin, a.dsMH.tmh);
	cin >> a.dsMH.cc >>a.dsMH.kt >> a.dsMH.thi;
}

Monhoc kiemtra(string mmh,Monhoc a[],int n){
	Monhoc t;
	t.cc=0;
	for(int i=0;i<n;i++){
		if(mmh == a[i].mmh){
			return a[i];
		}
	}
	return t.cc;
}

int main(){
	int n,m,k
	cin >> n >>> m;
	MonHoc
	struct Monhoc a[n];
	for(int i=0;i<n;i++){
	    nhapmh(a[i]);
	}
	struct Sinhvien b[m];
	for(int i=0;i<m;i++){
		nhapsv(b[i]);
		for(int j=0;j<b[i].k;j++){
		    int  x;
			cin >> x;
			if(kiemtra(x, a, n) != 0 ){
				b[i].dsMH.mmh = x;
				nhapcs(b[i]);
			}
		}
		
	}
	
	
	
}
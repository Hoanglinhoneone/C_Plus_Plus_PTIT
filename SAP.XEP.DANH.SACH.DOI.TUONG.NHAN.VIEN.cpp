#include<bits/stdc++.h>

using namespace std;
int dem=1;
struct NhanVien{
	string mnv,ten,gt,ns,dc,mst,nk;
	int dd,mm,yy;
	friend istream &operator >> (istream &in, NhanVien &a){
		string x=to_string(dem);
		while(x.size() < 5){
			x="0"+x;
		}
		a.mnv=x;
		dem++;
		cin.ignore();
		getline(in, a.ten);
		in >> a.gt >> a.ns;
		cin.ignore();
		getline(in, a.dc);
		in >> a.mst >> a.nk;
		a.mm=(a.ns[0] - '0')*10+(a.ns[1]-'0');
		a.dd=(a.ns[3] - '0')*10+(a.ns[4]-'0');
		a.yy=(a.ns[6] - '0')*1000+(a.ns[7]-'0')*100+(a.ns[8] - '0')*10+(a.ns[9]-'0');
		return in;
	}
	friend ostream &operator << (ostream &out, NhanVien a){
		cout << a.mnv <<" " << a.ten << " " << a.gt <<" " << a.ns <<" " << a.dc << " " << a.mst << " "<< a.nk << endl;
		return out;
	}
};
bool sx(NhanVien a, NhanVien b){
	if(a.yy == b.yy){
		if(a.mm == b.mm){
			return a.dd < b.dd;
		}
		return a.mm < b.mm;
	}
	return a.yy < b.yy;
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, sx);
}
int main(){
	NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
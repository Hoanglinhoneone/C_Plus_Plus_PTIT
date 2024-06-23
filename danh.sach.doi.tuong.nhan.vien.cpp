#include<bits/stdc++.h>

using namespace std;
int dem=1;
struct NhanVien{
	string mnv,ten,gt,ns,dc,mst,nk;
	friend istream &operator >>(istream &in, NhanVien &ds){
		cin.ignore();
		getline(in, ds.ten);
		string s = to_string(dem);
		while(s.size() < 5 ){
			s= "0" + s;
		}
		ds.mnv=s;
		dem++;
		in >> ds.gt >> ds.ns;
		cin.ignore();
		getline(in, ds.dc);
		in >> ds.mst >> ds.nk;
		return in;
	}
	friend ostream &operator << (ostream &out, NhanVien ds){
		out << ds.mnv << " " << ds.ten << " " << ds.gt << " " << ds.ns << " " << ds.dc << " " << ds.mst << " "<< ds.nk << endl;
		return out;
	}
};
int main(){
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0;i<N;i++) cin >> ds[i];
	for(int i=0;i<N;i++) cout << ds[i];
	return 0;
}
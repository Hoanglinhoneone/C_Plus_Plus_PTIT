#include<bits/stdc++.h>

using namespace std;
int dem=0;

struct SinhVien{
	string msv, ten, lop, ns;
	float gpa;
	friend istream &operator >> (istream &in, SinhVien &a){
		string s=to_string(dem+1);
		while(s.size() < 3){
			s="0" + s;
		}
		dem++;
		a.msv = "B21DCCN" + s;
		cin.ignore();
		getline(in, a.ten);
		cin >> a.lop >> a.ns >> a.gpa;
		if(a.ns[1] == '/'){
			a.ns = "0" + a.ns;
		}
		if(a.ns[4] == '/'){
			a.ns.insert(3, "0");
		}
		return in;
	}
	friend ostream &operator << (ostream &out, SinhVien a){
		cout << a.msv<<" " << a.ten<<" " << a.lop<<" " << a.ns<<" " << fixed << setprecision(2) << a.gpa << endl;
		return out;
	}
};
int main(){
	SinhVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> ds[i];
	}
	for(int i=0;i<N;i++){
		cout << ds[i];
	}
	return 0;
}
#include<bits/stdc++.h>

using namespace std;
struct NhanVien{
	long long mst;
	string mnv="00001", name,gt,ns,dc,nk;
};
void nhap(NhanVien &s){
	getline(cin,s.name);
	cin >> s.gt>> s.ns ;
	cin.ignore();
	getline(cin,s.dc);
	cin >> s.mst >> s.nk;
}
void in(NhanVien s){
	cout << s.mnv << " " << s.name << " " << s.gt << " " << s.ns << " " << s.dc << " ";
	cout << s.mst << " " << s.nk ;
}
int main(){
	struct NhanVien a;
	 nhap(a);
	 in(a);
	 return 0;
}


#include<bits/stdc++.h>

using namespace std;
struct SinhVien {
	string msv="N20DCCN001",ten,lop,ns;
	float gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.ten);
		cin >>a.lop;
		cin >>a.ns;
	if(a.ns[1]=='/'){
		a.ns="0"+a.ns;
	}
	if(a.ns[4]=='/'){
		a.ns.insert(3,"0");
	}
	cin >> a.gpa;
}
void inThongTinSV(SinhVien a){
	cout << a.msv <<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}

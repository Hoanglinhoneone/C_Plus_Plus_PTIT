#include<bits/stdc++.h>

using namespace std;

struct Nhanvien{
	string mnv, name;
	double hsl, lcb, pc, tong;
};	
void nhap(Nhanvien *a){
	cin >> (*a).hsl;
	cin.ignore();
	getline(cin,(*a).name);
	cin >> (*a).hsl >> (*a).lcb >> (*a).pc;
	(*a).tong = (*a).lcb*(*a).hsl+(*a).pc;
}
void xuat(Nhanvien *a){
	cout << "Tong luong cua nhan vien "<< (*a).mnv <<" :"<< endl;
	cout <<fixed << setprecision(3)<< (*a).tong << endl;
}
bool sx(Nhanvien a, Nhanvien b){
	return a.tong > b.tong;
}
void sapxep(Nhanvien a[],int n){
	sort(a, a+n, sx);
}
int main(){
	int n;cin >> n;
	struct Nhanvien a[n];
	Nhanvien *ptr= new Nhanvien a[n];
	for(int i=0;i<n;i++){
		nhap(&ptr[i]);
	}
	for(int i=0;i<n;i++){
		xuat(&ptr[i]);
	}
	sapxep(ptr, n);
	cout << endl;
	
	cout << "Nhan vien co tong luong cao nhat trong cong ty: "<< endl;
    xuat(&ptr[0]);
    xuat(&ptr[n-1]);
    return 0;
}
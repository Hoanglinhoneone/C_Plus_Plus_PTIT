#include<bits/stdc++.h>

using namespace std;
struct SinhVien{
	string msv,ten,lop;
	float point1,point2,point3;
};
void nhap(SinhVien &ds){
	cin >> ds.msv;
	cin.ignore();
	getline(cin, ds.ten);
	cin >> ds.lop;
	cin >> ds.point1 >> ds.point2 >> ds.point3;
}
void in_ds(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		cout << i+1 <<" "<< ds[i].msv <<" "<< ds[i].ten<<" "<< ds[i].lop<<" ";
		cout << fixed << setprecision(1) <<  ds[i].point1<<" ";
		cout << fixed << setprecision(1) <<  ds[i].point2<<" ";
		cout << fixed << setprecision(1) <<  ds[i].point3<< " " << endl;
	}
}
bool sx(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}
void sap_xep(SinhVien a[], int n){
	sort(a, a + n, sx);
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
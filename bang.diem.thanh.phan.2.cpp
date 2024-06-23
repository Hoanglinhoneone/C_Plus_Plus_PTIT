#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv,ten,lop;
	float spoint1,spoint2,spoint3;
};
void nhap(SinhVien ds[], int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin, ds[i].msv);
		getline(cin, ds[i].ten);
		getline(cin, ds[i].lop);
		cin >> ds[i].spoint1 >> ds[i].spoint2>> ds[i].spoint3;
	}
}
void in(SinhVien ds[], int n){
	
	for(int i=0;i<n;i++){
		cout <<i+1<<" "<< ds[i].msv <<" " << ds[i].ten<<" " << ds[i].lop<<" ";
		cout << fixed << setprecision(1) << ds[i].spoint1<<" ";
	    cout << fixed << setprecision(1) << ds[i].spoint2<<" ";
		cout << fixed << setprecision(1) << ds[i].spoint3<<" "<< endl;
	}
}

bool sx(SinhVien a, SinhVien b){
	return a.ten < b.ten;
}
void sapxep(SinhVien ds[], int n){
	sort(ds, ds + n,sx );
}
int main(){
	int n;
	cin >> n;
	struct SinhVien ds[n];
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
	return 0;
}
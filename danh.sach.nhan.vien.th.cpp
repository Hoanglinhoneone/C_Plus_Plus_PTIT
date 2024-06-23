#include<bits/stdc++.h>
/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/
using namespace std;
int dem=1;
struct NhanVien{
	string mnv, name, gt, ns, dc, mst, nk;
};
void nhap(NhanVien &a){
	string s=to_string(dem);
	while(s.size() < 5){
		s="0" + s;
	}
	a.mnv = s;
	dem++;
	cin.ignore();
	getline(cin, a.name);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nk;
}
void inds(NhanVien a[50], int n){
	for(int i=0;i<n;i++){
		cout << a[i].mnv << " " << a[i].name << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].mst << " " << a[i].nk << endl;
	}
}
int main(){
	struct NhanVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0;i<N;i++) nhap(ds[i]);
	inds(ds,N);
	return 0;
}
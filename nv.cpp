#include<bits/stdc++.h>
//01/01/2002
//0123456789
using namespace std;
int x=0;
struct NhanVien{
	string mnv,ten,gt,ns,dc,mst,nk;
	int dd,mm,yy;
};
bool sx(NhanVien a, NhanVien b){
	if(a.yy==b.yy){
		if(a.mm==b.mm){
			return a.dd < b.dd;
		}
		return a.mm < b.mm;
	}
	return a.yy < b.yy;
}
void nhap(NhanVien ds){
	cin.ignore();
	getline(cin, ds.ten);
	cin >> ds.gt>> ds.ns;
	cin.ignore();
	getline(cin, ds.dc);
	cin >> ds.mst>> ds.nk;
	ds.dd=(ds.ns[0]-'0')*10+(ds.ns[1]-'0');
	ds.mm=(ds.ns[3]-'0')*10+(ds.ns[4]-'0');
	ds.yy=(ds.ns[6]-'0')*1000+(ds.ns[7]-'0')*100+(ds.ns[8]-'0')*1000+(ds.ns[9]-'0');
	string s=to_string(x+1);
	while(s.size() < 5){
			s="0"+s;
	}
	ds.mnv=s;
}
void inds(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		cout << ds[i].mnv<<" "<<ds[i].ten <<" "<<ds[i].gt <<" "<<ds[i].ns;
		cout <<" "<<ds[i].mst<<" "<<ds[i].nk<<endl;
	}
}
void sapxep(NhanVien ds[], int n){
	sort(ds , ds + n , sx);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
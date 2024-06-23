#include<bits/stdc++.h>

//01/01/2003
//0123456789
using namespace std;

struct NhanVien{
	string mnv,name,gt,ns,dc,mst,nk;
	int dd,mm,yy;
};
void nhap(NhanVien ds){
	cin.ignore();
	getline(cin, ds.name);
	getline(cin, ds.gt);
	getline(cin, ds.ns);
	getline(cin, ds.dc);
	getline(cin, ds.mst);
	getline(cin, ds.nk);
	ds.dd=(ds.ns[0]-'0')*10+(ds.ns[1]-'0');
	ds.mm=(ds.ns[3]-'0')*10+(ds.ns[4]-'0');
	ds.yy=(ds.ns[6]-'0')*1000+(ds.ns[7]-'0')*100+(ds.ns[8]-'0')*10+(ds.ns[9]-'0');
}
void inds(NhanVien ds[], int n){
	for(int i=0;i<n;i++){
		string s=to_string(i+1);
		while(s.size() < 5){
			s="0"+s;
		}
		ds[i].mnv=s;
	    cout << ds[i].mnv <<" "<<ds[i].name<<" "<<ds[i].gt<<" "<<ds[i].ns<<" "<<ds[i].dc<<" "<<ds[i].mst<<" "<<ds[i].nk<<endl;
	}
}
bool sx(NhanVien a, NhanVien b){
	if(a.yy==b.yy){
		if(a.mm==b.mm){
			return a.dd < b.dd;
		}
		return a.mm < b.mm;
	}
	return a.yy < b.yy;
}
void sapxep(NhanVien ds[], int n){
	sort(ds, ds + n,sx);
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
#include<bits/stdc++.h>

using namespace std;
int i=1;
//01/01/2003
//0123456789
struct NhanVien{
	string mnv, ten, gt, ns, dc, mst, nk;
	int dd,mm,yy;
};
void nhap(NhanVien &ds){
	string s=to_string(i);
	while(s.size() < 5){
		s="0"+s;
	}
	ds.mnv=s;
	cin.ignore();
	getline(cin, ds.ten);
	cin >> ds.gt;
	cin >> ds.ns;
	cin.ignore();
	getline(cin, ds.dc);
	cin >> ds.mst;
	cin >> ds.nk;
	i++;
	ds.mm=(ds.ns[0]-'0')*10+(ds.ns[1]-'0');
	ds.dd=(ds.ns[3]-'0')*10+(ds.ns[4]-'0');
	ds.yy=(ds.ns[6]-'0')*1000+(ds.ns[7]-'0')*100+(ds.ns[8]-'0')*10+(ds.ns[9]-'0');
}
void inds(NhanVien ds[], int n){
	for(int i=0; i<n; i++){
	cout << ds[i].mnv <<" "<< ds[i].ten <<" "<<ds[i].gt <<" "<< ds[i].ns <<" "<<ds[i].dc <<" "<<ds[i].mst <<" "<<ds[i].nk<<endl;
    }
}
bool sx(NhanVien a, NhanVien b){
	if(a.yy==b.yy){
		if(a.mm==b.mm){
			return a.dd < b.dd;
		}
		else{
		    return a.mm < b.mm;
		}
	}
	return a.yy < b.yy;
}
void sapxep(NhanVien ds[],int n){
	sort(ds, ds + n, sx);
}

int main(){
	struct NhanVien ds[50];
	int N, i;
	cin >> N;
	for(int i=0; i<N; i++){
		nhap(ds[i]);
	}
	sapxep(ds, N);
	inds(ds, N);
	return 0;
}
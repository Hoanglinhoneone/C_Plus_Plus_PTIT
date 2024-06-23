#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string mnv="00001", ten, gt, ns, dc, mst, nk;
	void nhap(){
		getline(cin, ten);
		getline(cin, gt);
		getline(cin, ns);
		getline(cin, dc);
		getline(cin, mst);
		getline(cin, nk);	
	}
	void xuat(){
		cout <<mnv<<" "<<ten<<" "<<gt<<" "<<ns<<" "<<dc<<" "<<mst<<" "<<nk;
	}
	
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

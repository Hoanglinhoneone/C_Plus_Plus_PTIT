#include<bits/stdc++.h>

using namespace std;
struct ThucTap{
	string stt,msv,ten,lop,gmail,tendn;
};
bool sx(ThucTap a, ThucTap b ){
	return a.ten < b.ten;
}
void sapxep(ThucTap ds[],int n){
	sort(ds, ds+n, sx);
}

int main(){
	int n,q;
	cin >> n;
	struct ThucTap ds[50];
	for(int i=0;i<n;i++){
		ds[i].stt = to_string(i+1);
		cin >> ds[i].msv;
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].gmail >> ds[i].tendn;
	}
	sapxep(ds, n);
	cin >> q;
	while(q--){
	string s;
	cin >> s; 
	for(int i=0;i<n;i++){
		if(ds[i].tendn == s){
			cout <<ds[i].stt<<" " << ds[i].msv << " " << ds[i].ten << " "<< ds[i].lop << " ";
			cout << ds[i].gmail << " " << ds[i].tendn << endl;
		}
	}
    }
}
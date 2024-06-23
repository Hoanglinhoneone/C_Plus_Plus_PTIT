#include<bits/stdc++.h>

using namespace std;
int dem=1;
struct tt{
	int stt;
	string msv,ten,lop,email,dn;
	friend istream &operator >> (istream &in, tt &a){
		a.stt=dem;
		dem++;
		in >> a.msv;
		cin.ignore();
		getline(in, a.ten);
		in >> a.lop >> a.email >> a.dn;
		return in;
	}
	friend ostream &operator << (ostream &out, tt a){
		out << a.stt  << " " << a.msv << " " << a.ten << " " << a.lop << " " << a.email << " " << a.dn << endl;
	    return out;
	} 
};
bool sx(tt a, tt b){
	return a.msv < b.msv;
}
void sapxep(tt a[] , int n){
	sort(a, a + n, sx);
}

int main(){
	int n;
	cin >> n;
	struct tt ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	sapxep(ds, n);
	int q;
	string s;
	cin >> q;
	for(int i=0;i<q;i++){
		cin >> s;
		for(int i=0;i<n;i++){
			if(ds[i].dn == s){
				cout << ds[i] << endl;
			}
		}
	}
	return 0;
}
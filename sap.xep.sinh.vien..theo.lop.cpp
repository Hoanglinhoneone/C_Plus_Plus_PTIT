#include<bits/stdc++.h>

using namespace std;
  struct sv{
  	string msv,ten,lop,email;
};
bool sx(sv a, sv b){
	if(a.lop == b.lop){
		return a.msv < b.msv;
	}
	return a.lop < b.lop;
}
void sxx(sv a[], int n){
	sort(a, a+n, sx);
}

int main(){
	int n;
	cin >> n;
	struct sv a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].msv ;
		cin.ignore();
		getline(cin,a[i].ten) ;
		cin >> a[i].lop >> a[i].email;
	}
	sxx(a, n);
	for(int i=0;i < n ;i++){
		cout << a[i].msv << " " << a[i].ten<< " " << a[i].lop <<" " << a[i].email<< " " << endl;;
	}
	return 0;
}
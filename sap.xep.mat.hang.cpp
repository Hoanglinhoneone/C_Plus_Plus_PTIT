#include<bits/stdc++.h>

using namespace std;

struct hang{
	string ma,ten,nhom;
	double mua,ban,lai;
};
void nhap(hang a[], int n){
	for(int i=0;i<n;i++){
		a[i].ma=to_string(i+1);
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].lai=a[i].ban-a[i].mua;
	}
}

void in(hang a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].ma <<" " << a[i].ten <<" "<< a[i].nhom<<" " << fixed << setprecision(2) << a[i].lai << endl;
	}
}

bool sx(hang a, hang b){
	return a.lai > b.lai;
}
void sapxep(hang a[],int n){
	sort(a, a+n, sx);
}

int main(){
	int n;
	cin >> n;
	struct hang a[n];
	nhap(a, n);
	sapxep(a, n);
	in(a, n);
	return 0;
}
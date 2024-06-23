#include<bits/stdc++.h>
//01/01/2003
//0123456789
using namespace std;
using ll=long long;
struct tuoi{
	string ten,date;
    ll dd,mm,yy;
};
void nhap(tuoi a[], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].ten >> a[i].date;
	    a[i].yy=(a[i].date[6]-'0')*1000+(a[i].date[7]-'0')*100+(a[i].date[8]-'0')*10+(a[i].date[9]-'0');
	    a[i].mm=(a[i].date[3]-'0')*10+(a[i].date[4]-'0');
	    a[i].dd=(a[i].date[0]-'0')*10+(a[i].date[1]-'0');
    }
}
void xuat(tuoi a[], int n){
	cout << a[0].ten << endl;
	cout << a[n-1].ten << endl;	
}
bool sx(tuoi a,tuoi b){
	if(a.yy==b.yy){
		if(a.mm==b.mm){
			return a.dd > b.dd;
		}
		return a.mm > b.mm;
	}
	return a.yy > b.yy;
}
void sapxep(tuoi a[], int n){
	sort(a, a+n, sx);
}

int main(){
	int n;
	cin >> n;
	struct tuoi a[n];
	nhap(a, n);
	sapxep(a, n);
	xuat(a, n);	
}
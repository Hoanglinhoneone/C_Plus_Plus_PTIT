#include<bits/stdc++.h>
/*
3
11 20 20
14 20 14
11 15 12
*/
using namespace std;
struct thoigian{
	int gio, phut, giay;
};
bool sx(thoigian a, thoigian b){
	if(a.gio == b.gio){
		if(a.phut == b.phut){
			return a.giay < b.giay;
		}
		return a.phut < b.phut;
	}
	return a.gio < b.gio;
}
void sapxep(thoigian a[], int n){
	sort(a, a+n, sx);
}
int main(){
    int n;
    cin >> n;
    thoigian a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i].gio >> a[i].phut >> a[i].giay;
	}
	sapxep(a, n);
	for(int i=0;i<n;i++){
		cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << endl;
	}
	return 0;
}
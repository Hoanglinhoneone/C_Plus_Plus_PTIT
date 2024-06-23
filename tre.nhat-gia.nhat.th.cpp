#include<bits/stdc++.h>
/*
5
Nam 01/10/1991
An 30/12/1990
Binh 15/08/1993
Tam 18/09/1990
Truong 20/09/1990
*/
using namespace std;
struct checktuoi{
	string name, ns;
	int ngay, thang, nam;
};
bool sx(checktuoi a, checktuoi b){
	if(a.nam == b.nam){
		if(a.thang == b.thang){
			return a.ngay < b.ngay;
		}
		return a.thang < b.thang;
	}
	return a.nam < b.nam;
}
void sapxep(checktuoi a[], int n){
	sort(a,a+n,sx);
}
int main(){
	int n;
	cin >> n;
	checktuoi a[n];
	for(int i=0;i<n;i++){
		cin >> a[i].name >> a[i].ns;
		a[i].ngay=(a[i].ns[0]-'0')*10+(a[i].ns[1]-'0');
		a[i].thang=(a[i].ns[3]-'0')*10+(a[i].ns[4]-'0');
		a[i].nam=(a[i].ns[6]-'0')*1000+(a[i].ns[7]-'0')*100+(a[i].ns[8]-'0')*10+(a[i].ns[9]-'0');
	}
	sapxep(a, n);
	cout << a[n-1].name << endl;
	cout << a[0].name;	
}
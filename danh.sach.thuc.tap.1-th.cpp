#include<bits/stdc++.h>
/*
6
B17DCCN016 
Le Khac Tuan Anh 
D17HTTT2   
test1@stu.ptit.edu.vn 
VIETTEL
B17DCCN107 
Dao Thanh Dat    
D17CNPM5   
test2@stu.ptit.edu.vn
FPT
B17DCAT092 
Cao Danh Huy     
D17CQAT04-B
test3@stu.ptit.edu.vn
FPT
B17DCCN388 
Cao Sy Hai Long  
D17CNPM2   
test4@stu.ptit.edu.vn
VNPT
B17DCCN461 
Dinh Quang Nghia 
D17CNPM2   
test5@stu.ptit.edu.vn
FPT
B17DCCN554 
Bui Xuan Thai    
D17CNPM1   
test6@stu.ptit.edu.vn
GAMELOFT
1
FPT
*/
using namespace std;
int dem=1;
struct danhsach{
	string stt, msv, name, lop, email, dn;
};
void nhap(danhsach &ds){
	ds.stt = to_string(dem);
	dem++;
	cin >> ds.msv;
	cin.ignore();
	getline(cin, ds.name);
	cin >> ds.lop >> ds.email >> ds.dn;
}
void in(danhsach a){
	cout << a.stt << " " << a.msv << " "<< a.name << " " << a.lop << " " << a.email << " " <<a.dn << endl;
}
int main(){
	int n;
	cin >> n;
	danhsach a[n];
	for(int i=0;i<n;i++){
		nhap(a[i]);
	}
	int x;
	cin >> x;
	while(x--){
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			if(s== a[i].dn){
				in(a[i]);
			}
		}
	}
	return 0;
}
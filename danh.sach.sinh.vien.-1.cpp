#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	
	string msv="B20DCCN",name,lop,date;
	float gpa;
	
};
void nhap(SinhVien a[],int n){
	for(int i=1;i<=n;i++){
		cin.ignore();
		getline(cin, a[i].name);
		cin >> a[i].lop >> a[i].date >> a[i].gpa;
		if(a[i].date[1]=='/'){
			a[i].date="0"+ a[i].date;
		}
		if(a[i].date[4]=='/'){
			a[i].date.insert(3,"0");
		}
	}
}
void in(SinhVien a[],int n){
	for(int i=1;i<=n;i++){
		string s=to_string(i);
	    while(s.size() < 3){
	    	s="0"+s;
		}
		cout << a[i].msv<< s << " " << a[i].name << " " << a[i].lop << " " << a[i].date <<" " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}
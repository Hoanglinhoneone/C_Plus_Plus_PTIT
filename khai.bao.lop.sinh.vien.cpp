#include<bits/stdc++.h>
 using namespace std;
 struct SinhVien{
 	string msv,name,lop,ns;
 	float gpa;
 	void nhap(){
 		msv = "B20DCCN001";
 		getline(cin, name);
 		cin >> lop >> ns >> gpa;
 		if(ns[1]=='/'){
 			ns="0"+ns;
		 }
		if(ns[4]=='/'){
			ns.insert(3,"0");
		}
	 }
	void xuat(){
		cout << msv <<" " <<name << " " << lop <<" " <<ns<<" "<<fixed <<setprecision(2)<<gpa;
	}
 };
 int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

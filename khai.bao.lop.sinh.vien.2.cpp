#include<bits/stdc++.h>
 using namespace std;
 struct SinhVien{
 	string msv="B20DCCN001",name,lop,ns;
 	float gpa;
 	friend istream& operator >>(istream& in,SinhVien &a){
 		getline(in,a.name);
 		in >> a.lop >> a.ns >> a.gpa;
 		if(a.ns[1]=='/'){
 			a.ns="0"+a.ns;
		 }
		if(a.ns[4]=='/'){
			a.ns.insert(3,"0");
		}
 		return in;
	 }
	friend ostream& operator <<(ostream& out,SinhVien a){
		out << a.msv << " " << a.name << " " << a.lop << " "<< a.ns <<" "<<fixed<<setprecision(2)<<a.gpa;
	}
 };
 int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}

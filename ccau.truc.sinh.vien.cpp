#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma;
	string name,classs,ns;
	float gpa;
};
void nhap(SinhVien &s){
	s.ma="B20DCCN001";
	getline(cin,s.name);
	cin >> s.classs >> s.ns;
	cin >> s.gpa;
	if(s.ns[1]=='/'){
		s.ns="0"+s.ns;
	}
	if(s.ns[4]=='/'){
		s.ns.insert(3,"0");
	}
}
void in(SinhVien s){
	cout  << s.ma << " "<< s.name << " " << s.classs <<" " << s.ns<< " " ;
	cout << fixed << setprecision(2) << s.gpa;
}

int main(){
	struct SinhVien a;
	nhap(a);
	in(a);
	return 0;
}

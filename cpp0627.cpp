#include<bits/stdc++.h>
/*
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
*/
using namespace std;
string chuanhoa(string s){
	for(int i=0;i<s.size();i++){
		s[i] = tolower(s[i]);
	}
	return s;
}
string chuanhoa2(string s){
	string x="";
	stringstream ss(s);
	string token;
	while(ss >> token){
		token[0]=toupper(token[0]);
		x+=token[0];
	}
	return x; 
}

class GiangVien{
	private:
		string mgv, name, namecheck, BoMon, bm;
	static int x;
	public:
		friend istream &operator >> (istream &in, GiangVien &a);
		friend ostream &operator << (ostream &out, GiangVien a){
	        out << a .mgv << " " << a.name << " " << a.bm << endl;
	        return out;
        };
		string getNameCheck(){
			return namecheck;
		}
		
};
int GiangVien::x=1;
istream &operator >> (istream &in, GiangVien &a){
	string s="GV";
	a.mgv = s + string(2-to_string(a.x).size(), '0') + to_string(a.x);
	a.x++;
	
	getline(in, a.name);
	a.namecheck =  chuanhoa(a.name);
	
	getline(in, a.BoMon);
	a.bm = chuanhoa2(a.BoMon);
	
	return in;
}

//ostream &operator << (ostream &out, GiangVien a){
//	out << a.mgv << " " << a.name << " " << a.bm << endl;
//	return out;
//}

int main(){
	int n; cin >> n;
	cin.ignore();
	GiangVien ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	int n1; cin >> n1;
	cin.ignore();
	while(n1--){
		string tim;
		getline(cin, tim);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tim <<":" << endl;	
		for(int i=0; i < n ; i++){
			if(ds[i].getNameCheck().find(chuanhoa(tim)) != -1){
				cout << ds[i];
			}
		}
	}
}
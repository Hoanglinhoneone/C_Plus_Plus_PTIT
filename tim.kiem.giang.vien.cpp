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
	string s1="";
	stringstream ss(s);
	string token;
	while(ss >> token){
		token[0]=toupper(token[0]);
		s1+=token[0];
	}
	return s1;
}
string chuanhoa2(string s){
	string s1="";
	stringstream ss(s);
	string token;
	while(ss >> token){
		for(int i=0;i<token.size();i++){
			token[i]=tolower(token[i]);
		}
		s1=s1+token;
	}
	return s1;
}
class giangvien{
	private:
		string mgv, ten, bm, tenthuong;
	static int x;
	public:
		friend istream &operator >> (istream &in,  giangvien &a){
			string s="GV";
			a.mgv= s + string(2-to_string(x).size(),'0') + to_string(x);
			x++;
			getline(in, a.ten);
			getline(in, a.bm);
			a.bm=chuanhoa(a.bm);
			a.tenthuong=chuanhoa2(a.ten);
			return in;
		}
		friend ostream &operator << (ostream &out, giangvien a){
			out << a.mgv << " " << a.ten << " " << a.bm << endl;
			return out;
		}
		string getTenthuong();
};
int giangvien::x=1;
string giangvien::getTenthuong(){
	return this->tenthuong;
}

int main(){
	int n;cin >> n;
	cin.ignore();
	class giangvien a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin, s);
		string s2=chuanhoa2(s);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s <<":" << endl;
		for(int i=0;i<n;i++){
			if(a[i].getTenthuong().find(s2) != -1){
				cout << a[i];
			}
		}
	}
}
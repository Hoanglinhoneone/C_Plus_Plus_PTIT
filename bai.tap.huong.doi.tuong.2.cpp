#include<bits/stdc++.h>

using namespace std;

class nhanvien{
	private:
		string name;
		int luong,pc;
		float hs;
	public:
		friend istream &operator >>(istream &in, nhanvien &a);
		friend ostream &operator <<(ostream &out, nhanvien a);
		bool operator > (nhanvien a);
		string getname();
};
string nhanvien::getname(){
	return this->name;
}
istream &operator >> (istream &in, nhanvien &a){
	in >> a.name>> a.luong >> a.pc >> a.hs;
	return in;
}
ostream &operator <<(ostream &out, nhanvien a){
	out <<a.name<<" "<< a.luong<<" "<< a.pc <<" "<< a.hs;
	return out;
}
bool nhanvien::operator > (nhanvien a){
	return this->luong > a.luong;
}


int main(){
	nhanvien a,b;
	cin >> a;
	cin >> b;
	if(a > b){
		cout << a.getname()<<" nhieu tien hon " <<b.getname()<< endl;
	}
	else cout <<b.getname()<<" nhieu tien hon "<< a.getname() << endl;
}
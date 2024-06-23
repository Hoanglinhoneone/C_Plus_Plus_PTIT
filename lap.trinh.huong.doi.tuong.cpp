#include<bits/stdc++.h>

using namespace std;
// class : Lớp;
// thuộc tính : attribute
//phương thức :method, behavior;
// opject: đối tượng.
//constructor: xây dựng (hàm tạo);
//destructor: hàm hủy;
// This pointer: (this-> phần tử trong class)// con trỏ this.
// setter(gán giá trị cho phần tử của private), getter(trả về phần tử trong private)//
//Encapsulation : đóng gói

//Access modifier:
//-private : riêng biệt
//-public : công cộng
//-protected : được bảo vệ
//static
//friend function, friend class.
// operator overloading// >> << 
// cout : ostream
// cin : istream

//vd:
class SinhVien{
	// Thuộc tính và Phương thức
	private:// không thể truy cập được ở ngoài class.
		string id,ten,ns;// không gán được giá trị từ đầu.
		double gpa;
	public:// có thể truy cập được ở ngoài class.
	    SinhVien();
		void xinchao();
		void dihoc();
		double getGpa()// trả về gpa;
		void setGpa
		~SinhVien();
		friend void inthongtin(SinhVien);
		friend void Chuanhoa(SinhVien&);
		friend istream &operator >>(istream &in, SinhVien &a){// nạp chồng toán tử nhập
			...
			return in;
		}
		friend ostream &operator << (ostream &out, SinhVien &a){// nạp chồng toán tử xuất
			...
			return out;
		}
		bool operator < (SinhVien a);
};
bool SinhVien::operator < (SinhVien a){
	return this->gpa < a.gpa;
}
void inthongtin(SinhVien a){
	cout << a.id << a.ten << a.ns >> a.gpa;
}
void chuanhoa(SinhVien &a){
     string s="";
     stringstream ss(a.ten);
     string token;
     while(ss >> token){
     	token[0]=toupper(token[0]);
     	for(int i=1;i<token.size();i++){
     		token[i]=tolower(token[i]);
		 }
		 s=s+token+" ";
	 }
	 a.ten =  s.erase(s.size()-1);
}
double SinhVien ::getGpa(){
	return this->gpa();// trả về gpa;
}
void SinhVien::setGpa(double){
	this->gpa=gpa;
}

// implementation
SinhVien::SinhVien(){
	id=ten=ns="";
	gpa=0;
}
SinhVien::SinhVien(string ma,string name, string ngaysinh, double diem){
	id=ma;
	ten=name;
	ns=ngaysinh;
	gpa=diem;
}
SinhVien::SinhVien(){
	cout <<"ngoc linh mai dinh" << endl;
}
void SinhVien::xinchao(){
	cout <<"HELLO" << endl;
}
void SinhVien::dihoc(){
	cout << "Dihoc"<< endl;
}
bool cmp(SinhVien a, SinhVien b){
	return a.getgpa() > b.getgpa();
}
int main(){
	SinhVien x;
	setGpa(2.18);// gán gpa=2.18;
	x.dihoc();
	x.xinchao();
}
#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	friend class congty;
	private :
	    string mnv, name;
	    float lcb;
	    static int dem;
	public :
		void nhap();
		friend void inthongtin(NhanVien);
		friend void chuanhoa(NhanVien&);
};
void NhanVien::nhap(){
	cout << "Nhap mnv: ";
	cin >> this->mnv;
	cout << "Nhap ten: ";
	cin.ignore();
	getline(cin, this->name);
	cout << "Nhap luong: ";
	cin >> this->lcb;
}
void inthongtin(NhanVien a){
	cout << "thong tin nhan vien: " << endl;
	cout  << a.mnv << " " << a.name << " " << a.lcb;
}
void chuanhoa(NhanVien &a){
	string res="";
	stringstream ss(a.name);
	string token;
	while(ss >> token){
		token[0]=toupper(token[0]);
		res+=token[0];
		for(int i=1;i< token.size();i++){
			token[i]=tolower(token[i]);
			res+=token[i];
		}
		res+=" ";
	}
	res.pop_back();
	a.name=res;
}
class congty{
	private:
		string khoi;
	public:
		void update(NhanVien&);
};

void congty::update(NhanVien &a ){
	a.lcb = 5000; 
}

int main(){
	NhanVien a;
	a.nhap();
	chuanhoa(a);
	congty b;
	b.update(a);
    inthongtin(a);
}
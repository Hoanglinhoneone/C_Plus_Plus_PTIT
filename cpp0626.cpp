#include<bits/stdc++.h>

using namespace std;
/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
1
Cong nghe phan mem
*/
class GiangVien{
	private:
	    string mgv, name, BoMon, bm;
	static int x;
	public:
		void nhap(GiangVien&);
		void xuat(GiangVien);
		string getBoMon(){
			return BoMon;
		}
		string getBM(){
			return bm;
		}
};
int GiangVien::x=1;
void GiangVien::nhap(GiangVien &a){
	string s="GV";
    a.mgv = s + string(2-to_string(a.x).size(), '0') + to_string(a.x);
    
    getline(cin, a.name);
    getline(cin, a.BoMon);
    
    stringstream ss(BoMon);
    string token;
    string s1="";
    while(ss >> token){
    	token[0]=toupper(token[0]);
    	s1+=token[0];
	}
	a.bm=s1;
}
void GiangVien::xuat(GiangVien a){
//	cout << "DANH SACH GIANG VIEN THEO BO MON " << bm << ":" << endl;
	cout << a.mgv << " " << a.name << " " <<  a.bm << endl; 
}
string rg(string s){
	string x="";
	stringstream ss(s);
	string token;
	while(ss >> token){
		token[0]=toupper(token[0]);
		x+=token[0];
	}
	return x;
}
int main(){
	int n;
	cin >> n;
	GiangVien ds[n];
	for(int i=0;i<n;i++){
		nhap(ds[i]);
	}
	int check;
	cin >> check;
	
	for(int i=0;i<check;i++){
		string bomon;
		getline(cin, bomon);
		cout << "DANH SACH GIANG VIEN THEO BO MON " << rg(bomon) << ":" << endl;
		for(int i=0;i<n;i++){
	    	if(ds[i].getBoMon() == bomon){
			xuat(ds[i]);
		    }
		}
	}
}
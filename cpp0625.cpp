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
*/
class GiangVien{
	private:
		string Mgv, name, BoMon, tenrieng;
	static int x;
	public:
		friend istream &operator >> (istream &in, GiangVien &a);
		friend ostream &operator << (ostream &out, GiangVien a);
		string getTenRieng(){
			return tenrieng;
		}
		string getMgv(){
			return Mgv;
		}
};
int GiangVien::x=1;
istream &operator >> (istream &in, GiangVien &a){
	string s="GV";
	a.Mgv = s + string(2-to_string(a.x).size(), '0') + to_string(a.x);
	a.x++;
	getline(in, a.name);
	getline(in, a.BoMon);
	
	string s1 = "";
	stringstream ss1(a.BoMon);
	string token1;
	while(ss1 >> token1){
		token1[0]=toupper(token1[0]);
		s1+=token1[0];
	}
	a.BoMon=s1;
	
	string s2;
	stringstream ss2(a.name);
	string token2;
	while(ss2 >> token2){
		s2 = token2;
	}
	a.tenrieng = s2;
	return in;
}
ostream &operator << (ostream &out, GiangVien a){
	out << a.Mgv << " " << a.name << " " << a.BoMon  << endl;
	return out;
}
bool sx(GiangVien a, GiangVien b){
	if(a.getTenRieng() == b.getTenRieng()){
		return a.getMgv() < b.getMgv();
	}
	return a.getTenRieng() < b.getTenRieng();
}
void sapxep(GiangVien a[], int n){
	sort(a, a+n, sx);
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	GiangVien ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	sapxep(ds, n);
	for(int i=0;i<n;i++){
		cout << ds[i];
	}
}
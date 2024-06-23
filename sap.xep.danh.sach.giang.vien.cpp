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

class giangvien{
	private :
		string mgv, ten, bm, tenrieng;
		static int x;
	public:
		friend istream& operator >> (istream &in, giangvien &a){
			string s1="GV";
			a.mgv =s1+string(2-to_string(x).size(),'0')+to_string(x);
			getline(in, a.ten);
			getline(in, a.bm);
			string s="";
			stringstream ss(a.bm);
			string token;
			while(ss >> token){
				token[0]=toupper(token[0]);
				s+=token[0];
			}
			a.bm=s;x++;
			stringstream xx(a.ten);
			string token1;
			vector<string> v;
			while(xx >> token1){
				v.push_back(token1);
			}
			a.tenrieng=v[v.size()-1];
			return in;
		}
		friend ostream& operator << (ostream &out, giangvien a){
			out << a.mgv << " " << a.ten << " " << a.bm<< endl;
			return out;
		}
		string getTenrieng();
		string getMgv();
};

string giangvien::getMgv(){
	return this-> mgv;
}
string giangvien::getTenrieng(){
	return this->tenrieng;
}
bool sx(giangvien a, giangvien b){
	if(a.getTenrieng() == b.getTenrieng()){
		return a.getMgv() < b.getMgv();
	}
	return a.getTenrieng() < b.getTenrieng();
}
void sapxep(giangvien a[], int n){
	sort(a, a+n, sx);
}
int giangvien::x=1;
int main(){
	int n;cin >> n;
	cin.ignore();
	class giangvien a[n];
	for(int i=0;i<n;i++){	
		cin >> a[i];
	}
	sapxep(a, n);
	for(int i=0;i<n;i++){
		cout << a[i];
	}
	return 0;
}
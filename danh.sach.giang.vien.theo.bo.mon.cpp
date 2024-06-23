#include<bits/stdc++.h>
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
    class giangvien{
    	private:
    		string mgv, ten, bm;
    	static int x;
    	public:
    		friend istream& operator >> (istream &in, giangvien &	a){
    			string s="GV";
    			a.mgv= s+string(2-to_string(x).size(),'0')+to_string(x);
    			x++;
    			getline(in, a.ten);
    			getline(in, a.bm);
    			a.bm = chuanhoa(a.bm);
    			return in;
			}
			friend ostream &operator << (ostream &out, giangvien a){
			    out << a.mgv << " " <<a.ten << " " << a.bm << " " << endl;
			    return out;
			}
			string getBm(){
				return this->bm;
			}
			
        
	};
int giangvien::x=1;
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
		s=chuanhoa(s);
		cout << "DANH SACH GIANG VIEN BO MON " << s <<":" << endl;
		for(int i=0;i<n;i++){
			if(s == a[i].getBm()){
				cout << a[i];
			}
		}
	}
	return 0;
}
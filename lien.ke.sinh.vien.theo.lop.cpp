#include<bits/stdc++.h>

using namespace std;
class sinhvien{
	private:
		string msv, ten, lop, email;
	public:
		string getLop();
		friend istream& operator >> (istream &in, sinhvien &a){
			in >> a.msv ;
			in.ignore();
			getline(in, a.ten);
			in >> a.lop >> a.email;
			return in;
		}
		friend ostream& operator << (ostream &out, sinhvien a){
			out << a.msv << " " << a.ten<< " " << a.lop<< " " << a.email << endl;
			return out;
		}
};
string sinhvien::getLop(){
	return this->lop;
}
int main(){
	int n;
	cin >> n;
	sinhvien a[n];
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s <<":"<<endl;
	    for(int i=0;i<n;i++){
		    if(s == a[i].getLop()){
		    	cout << a[i];
			}
	    }
    }
    return 0;
}
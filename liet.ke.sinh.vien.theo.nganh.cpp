#include<bits/stdc++.h>
/*
4
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT02-B
sv4@stu.ptit.edu.vn
*/
using namespace std;
class sinhvien{
	private:
	    string msv, ten, lop, email;
	public:
		string getLop();
		string getMsv();
	    friend istream& operator >> (istream &in, sinhvien &a){
	    	in >> a.msv;
	    	cin.ignore();
	    	getline(in, a.ten);
	    	in >> a.lop >> a.email;
	    	return in;
		}
		friend ostream& operator << (ostream &out, sinhvien a){
			out << a.msv <<" "<< a.ten<<" " << a.lop <<" " << a.email << endl;
			return out;
		}
};
string sinhvien::getMsv()
{
	return this->msv;
}
string sinhvien::getLop(){
	return this->lop;
}
int main(){
	int n;cin >> n;
	class sinhvien a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int q;cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin, s);
		for(int i=0;i<s.size();i++){
			s[i]=toupper(s[i]);
		}
		cout << "DANH SACH SINH VIEN NGANH " << s <<":" <<endl;
		for(int i=0;i<n;i++){
			
			if((a[i].getLop()[0]=='E') && ((a[i].getMsv()[5] == 'C') || (a[i].getMsv()[5]== 'A'))) continue;
			
			if( a[i].getMsv()[5] == s[0] ){
					cout << a[i];
			}
		}
	}
}
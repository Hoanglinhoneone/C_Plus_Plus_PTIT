#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv, name,lop,date;
	float gpa;
	vector<string> v;
	friend istream& operator >>(istream& in, SinhVien &a){
		a.msv="B20DCCN001";
		getline(in,a.name);
		in >> a.lop >> a.date >> a.gpa;
		if(a.date[1]=='/'){
			a.date="0"+a.date;
		}
		if(a.date[4]=='/'){
			a.date.insert(3,"0");
	    }
	    for(int i=0;i<a.name.size();i++){
	    	a.name[i]=tolower(a.name[i]);
		}
	    stringstream ss(a.name);
	    string token;
	    while(ss >> token){
	    	a.v.push_back(token);
		}
		for(int i=0;i<a.v.size();i++){
			a.v[i][0]=toupper(a.v[i][0]);
		}
	    return in;
	}
	friend ostream& operator <<(ostream& out,SinhVien a){
		out <<a.msv<<" ";
		for(int i=0;i<a.v.size();i++){
			out << a.v[i] <<" ";
		}
		out <<a.lop<<" "<< a.date<<" "<<fixed<<setprecision(2)<<a.gpa;
		return out;
	}
};

int main(){
	SinhVien a;
	cin >> a;
	cout << a;
	return 0;
	
}

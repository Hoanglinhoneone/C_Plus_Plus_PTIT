#include<bits/stdc++.h>

using namespace std;
int i=1;
struct SinhVien{
	string msv="B20DCCN",ten,lop,ns;
	float gpa;
	friend istream& operator >>(istream& in, SinhVien &ds){
		cin.ignore();
		getline(in, ds.ten);
		if(ds.ns[1]=='/'){
			ds.ns="0"+ds.ns;
		}
		if(ds.ns[4] == '/'){
			ds.ns.insert(3, "0");
		}
		string s=to_string(i);
		while(s.size() < 3){
			s = "0"+s;
		}
		i++;
		ds.msv+=s;
		return in;
	}
	friend ostream& operator <<(ostream& out, SinhVien ds){
		cout << ds.msv << " " << ds.ten << " " << ds.lop << " " << ds.ns << " ";
		cout << fixed << setprecision(2) << ds.gpa <<endl;
		return out;
	}
};
int main(){
	struct SinhVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> ds[i];
	}
	for(int i=0;i<N;i++){
		cout << ds[i];
	}
	return 0;
}
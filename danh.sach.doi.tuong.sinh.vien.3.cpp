#include<bits/stdc++.h>

using namespace std;
int i=1;
struct SinhVien{
	string msv="B20DCCN",ten,lop,ns;
	float gpa;
	friend istream& operator >> (istream& in, SinhVien &ds){
		cin.ignore();
		getline(in, ds.ten);
		string s="";
		string token;
		stringstream ss(ds.ten);
		while(ss >> token){
			token[0]=toupper(token[0]);
			for(int i=1;i<token.size();i++){
				token[i]=tolower(token[i]);
			}
			s=s+token+" ";
		}
		ds.ten=s.erase(s.size()-1);
		string x=to_string(i);
		while(x.size() < 3){
			x="0"+x;
		}
		ds.msv+=x;
		in >> ds.lop >> ds.ns >> ds.gpa;
		if(ds.ns[1] == '/'){
			ds.ns="0"+ds.ns;
		} 
		if(ds.ns[4] == '/'){
			ds.ns.insert(3,"0");
		}
		i++;
		return in;
	}
	friend ostream& operator << (ostream& out, SinhVien ds){
		cout << ds.msv << " " << ds.ten << " " << ds.lop << " " << ds.ns << " " <<fixed << setprecision(2) <<ds.gpa << endl;
		return out;
	}
};
bool sx(SinhVien a, SinhVien b){
 	return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int N){
 	sort(ds, ds + N, sx);
 }
int main(){
	struct SinhVien ds[50];
	int N,i;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> ds[i];
	}
	sapxep(ds, N);
	for(int i=0; i<N;i++){
		cout << ds[i];
	}
	return 0;
}
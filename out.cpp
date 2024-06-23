#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv,name,lop,date;
	float gpa;
	void chuanhoaname(){
		stringstream ss(name);
		string token,namefake="";
		while(ss >> token){
			for(int i=0;i<token.size();i++){
				token[i]=tolower(token[i]);
			}
			token[0]=toupper(token[0]);
			namefake=namefake+token+" ";
			namefake.erase(namefake.size()-1);
			name=namefake;
		}
	}
};
void nhap(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		string s=to_string(i+1);
		while(s.size() < 3){
			s="0"+s;
		}
		a[i].msv="B20DCCN"+s;
		cin.ignore();
		getline(cin, a[i].name);
		a[i].chuanhoaname();
		cin >> a[i].lop >> a[i].date >> a[i].gpa;
		if(a[i].date[1]=='/'){
			a[i].date="0"+a[i].date;
		}
		if(a[i].date[4]=='/'){
			a[i].date.insert(3,"0");
		}
	}
}
void in(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].msv <<" "<<a[i].name<<" "<<a[i].lop<<" "<<a[i].date<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
	}
}
bool sx(SinhVien a,SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien a[],int n){
	sort(a, a+n, sx);
}

int main(){
	struct SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	sapxep(ds, N);
	in(ds, N);
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv="B20DCCN",name,lop,date;
	float gpa;
	vector<string> v;
};

void nhap(SinhVien a[], int n){
	for(int i=1;i<=n;i++){
		cin.ignore();
		getline(cin, a[i].name);
		for(int z=0;z<a[i].name.size();z++){
			a[i].name[z]=tolower(a[i].name[z]);
		}
		stringstream ss(a[i].name);
		string token;
		while(ss >> token){
			a[i].v.push_back(token);
		}
		for(int j=0;j<a[i].v.size();j++){
			a[i].v[j][0]=toupper(a[i].v[j][0]);
		}
	    getline(cin, a[i].lop);
	    getline(cin, a[i].date);
	    if(a[i].date[1]=='/'){
	    	a[i].date="0" + a[i].date;
		}
		if(a[i].date[4] == '/'){
			a[i].date.insert(3,"0");
		}
	    cin >> a[i].gpa;
	}
}
void in(SinhVien a[],int n){
	for(int i=1;i<=n;i++){
		string s=to_string(i);
		while(s.size() < 3){
			s="0"+s;
		}
		cout << a[i].msv<<s<<" ";
		for(int k=0;k<a[i].v.size();k++){
			cout << a[i].v[k]<<" ";
		}
		cout << a[i].lop << " "<<a[i].date<<" "<<fixed<<setprecision(2)<<a[i].gpa<<endl;
		
	}
}

int main(){
	SinhVien ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	in(ds, N);
	return 0;
}
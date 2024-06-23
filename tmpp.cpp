#include<bits/stdc++.h>
using namespace std;
int ma=0;
struct SinhVien{
	string ht,lop,ns;
	float gpa;
};
typedef struct SinhVien SinhVien;

void nhap(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		
		
	}
}
bool cmp1(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien a[],int n)
{
	sort(a,a+n,cmp1);
}
string chuanhoa(string name)
{
	string tmp="";
	for(int i=0;i<name.length();i++)
	{
		name[i]=tolower(name[i]);
	}
	stringstream ss(name);
	string a;
	while(ss>>a)
	{
		a[0]=toupper(a[0]);
		tmp+=a+" ";
	}
	return tmp;
}
void in (SinhVien ds[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(i<9) cout<<"B20DCCN00"<<i+1<<" ";
		else cout<<"B20DCCN0"<<i+1<<" ";
		if(ds[i].ns[1]=='/') ds[i].ns="0"+ds[i].ns;
		if(ds[i].ns[4]=='/') ds[i].ns.insert(3,"0");
		string ch=chuanhoa(ds[i].ht);
		cout<<ch<<" "<<ds[i].lop<<" "<<ds[i].ns<<" ";
		cout<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
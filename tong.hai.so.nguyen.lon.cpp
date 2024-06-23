#include<bits/stdc++.h>

using namespace std;
string tong(string a, string b){
	int nho=0;
	string s="";
	if(a.size() >  b.size()){
		b.insert(0, a.size()-b.size(),'0');
	}
	if(b.size() > a.size()){
		a.insert(0, b.size()-a.size(),'0');
	}
	if(b>a){
		string t=a;
		       a=b;
		       b=t;
	}
	for(int i = a.size()-1;i>=0;i--){
		int tong = a[i]-'0' + b[i]-'0' + nho;
		nho=tong/10;
		tong=tong%10;
		s.insert(0,1,tong+'0');
	}
	if(nho==1 && s.size() == a.size() ) s="1"+s;
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		cout <<    tong(a, b) << endl;
	}
}
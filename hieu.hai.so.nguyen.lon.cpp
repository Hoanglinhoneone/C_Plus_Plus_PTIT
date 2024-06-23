#include<bits/stdc++.h>

using namespace std; 

string hieu(string a, string b){
	int nho=0;
	string s="";
	if(a.size() > b.size()){
		b.insert(0,a.size()-b.size(), '0');
	}
	if(a.size() < b.size()){
		a.insert(0, b.size() - a.size(), '0');
	}
	if( b > a){
		string t=a;
		       a=b;
		       b=t;
	}
	for(int i=a.size()-1;i>=0;i--){
		nho=a[i]-b[i]-nho;
		if(nho < 0 ){
			nho += 10;
			s.insert(0,1,nho +'0');
			nho=1;
		}
		else {
			s.insert(0,1,nho+'0');
			nho=0;
		}
	}
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		cout << hieu(a, b) << endl;
	}
}
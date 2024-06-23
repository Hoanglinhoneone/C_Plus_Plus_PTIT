#include<bits/stdc++.h>

using namespace std;
/*
3
Luu Thuy Nhi
9.3  9.0  7.1  6.5  6.2  6.0  8.2  6.7  4.8  5.5
Le Van Tam
8.0  8.0  5.5  9.0  6.8  9.0  7.2  8.3  7.2  6.8
Nguyen Thai Binh
9.0  6.4  6.0  7.5  6.7  5.5  5.0  6.0  6.0  6.0
*/
int dem=1;
struct diemsv{
	string name, sl, stt ;
	float d1,d2,d3,d4,d5,d6,d7,d8,d9,d10;
	float dtb;
	friend istream &operator >> (istream &in, diemsv &a){
		string s="HS";
		a.stt = s + string(2-to_string(dem).size(), '0') + to_string(dem);
		dem++;
		getline(in, a.name);
		cin >> a.d1 >> a.d2 >> a.d3 >> a.d4 >> a.d5 >> a.d6 >> a.d7 >> a.d8 >> a.d9 >> a.d10;
		cin.ignore();
		a.dtb=(2*a.d1+2*a.d2+a.d3+a.d4+a.d5+a.d6+a.d7+a.d8+a.d9+a.d10)/12;

		if(a.dtb >= 9){
			a.sl = "XUAT SAC";
		}
		if(a.dtb >= 8 && a.dtb <= 8.9){
			a.sl= "GIOI";
		}
		 if(a.dtb >= 7 && a.dtb <= 7.9){
			a.sl = "KHA";
		}
		
	     if(a.dtb >= 5 && a.dtb <= 6.9){
			a.sl = "TB";
		}
		if(a.dtb < 5) {
			a.sl = "YEU";
		}
		return in;
	}
	friend ostream &operator << (ostream &out, diemsv a){
		out << a.stt << " " << a.name << " " <<fixed<< setprecision(1)<< a.dtb << " " << a.sl << endl;
		return out;
	}
};
bool sx(diemsv a, diemsv b){
	if(a.dtb == b.dtb){
		return a.stt < b.stt;
	}
	return a.dtb > b.dtb;
}
void sapxep(diemsv a[], int n){
	sort(a, a+n, sx);
}
int main(){
	int n; cin >> n;
	cin.ignore();
	diemsv ds[n];
	for(int i=0;i<n;i++){
		cin >> ds[i];
	}
	sapxep(ds, n);
	for(int i=0;i<n;i++){
		cout << ds[i];
	}
	
}
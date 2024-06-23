#include<bits/stdc++.h>

using namespace std;
void xoa(vector<string> v1, int vt){
	int n=v1.size();
	for(int i=vt+1;i<n;i++){
		v1[i-1]=v1[i];
	}
	v1[n-1]='\0';
}
void xoa_trung(vector<string> v1){
	for(int i=0;i<v1.size();i++){
		bool kt=false;
			for(int j=i+1;j<v1.size();j++){
				if(v1[i]==v1[j]){
					xoa(v1,j);
					j--; // tranh truong hop 2 ky tu lien nhau.
					kt=true;
				}	
			}
			if(kt == true){
				xoa(v1,i);
				i--;
			}
		}
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		vector<string> v1;
		vector<string> v2;
		stringstream ss(s1);
		stringstream xx(s2);
		string token1,token2;
		while(ss >> token1){
			v1.push_back(token1);
		}
		while(xx >> token2){
			v2.push_back(token2);
		}
		int x=v2.size();
		xoa_trung(v1);
		for(int i=0;i<v1.size();i++){
			int dem=0;
			for(int j=0;j<v2.size();j++){
				if(v1[i] != v2[j]){
					dem++;
				}
			}
			if(dem==x){
				cout << v1[i] << " ";
			}	
		}
		cout << endl;
	}
}

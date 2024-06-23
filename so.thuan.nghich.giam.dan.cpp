#include<bits/stdc++.h>

using namespace std;
struct data{
	string s;
	int index;
};
bool check(string a){
	int l=0,r=a.size()-1;
	while(l<=r){
		if(a[l] !=a[r]) return false;
		++l;--r;
	}
	return true;
}
bool sx(data a, data b){
	if(a.s.size() == b.s.size()) return a.s > b.s;
	return a.s.size() > b.s.size();
}
int main(){
	string a;
	vector<data> v;
	while(cin>>a){
		if(a.size() == 1) continue;
		if(check(a)){
			int ok=-1;
			for(int i=0;i<v.size();i++){
				if(a == v[i].s){
					ok=i;
					break;
				}
			}
			if(ok == -1){
				struct data b;
				b.s = a;
				b.index = 1;
				v.push_back(b);
			}
			else v[ok].index++;
		}
	}
	sort(v.begin(), v.end(), sx);
	for(int i=0;i<v.size();i++){
		cout << v[i].s << " " << v[i].index << endl;
	}
	return 0;
} 
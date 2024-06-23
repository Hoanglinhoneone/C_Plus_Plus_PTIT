#include<bits/stdc++.h>

using namespace std;
struct ThiSinh{
	string name,ns;
	float x1,x2,x3;
};
void nhap(ThiSinh &s){
	getline(cin,s.name);
	cin >> s.ns;
	cin >> s.x1 >> s.x2 >> s.x3;
}
void in(ThiSinh s){
	cout << s.name <<" "<<s.ns<<" ";
	cout << fixed << setprecision(1)<< s.x1+s.x2+s.x3;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
}
	

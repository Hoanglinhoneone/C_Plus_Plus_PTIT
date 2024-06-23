// kieu struct:

#include<bits/stdc++.h>

using namespace std;

//vd:
struct Sophuc{
	int a,b;
	//  chong toan tu nhap :
	friend istream& operator >>(istream& in, SoPhuc s){
		in >> s.a >> s.b;
	}
	// chong toan tu xuat:
	friend ostream& operator <<(ostream& out, SoPhuc s){
		out << s.a << s.b;
	}
	// chong toan tu bang:
	friend bool operator == (const name1, const name2){
		retunr name1.a==name .a && name1.b==name2.b;
	}
//	chong toan tu nho hon:
	friend bool operator < (const name1, cpnst name2){
		return name1.gpa <name .gpa;
	}
	// hoac dung :
	bool operator < (const sophuc other){
		return gpa < other.gpa;
	}
}sp1,sp2;// khai bao 2 bien kieu so phuc.

int main(){
	SoPhuc a, b;
	cin >> a >> b;
	if(a>b){
		cout "YES"
	}
	else {
		cout << "no";
	}
}
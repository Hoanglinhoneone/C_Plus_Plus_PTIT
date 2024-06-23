#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream tach(s);//tách xâu S khi gặp dấu cách.
	string gan;// xây dựng từ để gán xau khi tách.
	vector<string> v;
	while(tach >> gan){
	    for(int i=0; i<gan.size(); i++){
		    gan[i]=tolower(gan[i]);// chuẩn hóa các ký tự còn lại thành viết thường.
        }
		v.push_back(gan);	// thêm từ vào cuối vector để lưu lại chuỗi.
	}
	cout << v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		cout << v[i][0];// in ra xâu sau khi chuẩn hóa.
	}
	cout <<"@pit.edu.vn" ;
	return 0;
}

 #include<bits/stdc++.h>

using namesapce std;

int main(){
	// khai báo:
	//pair<kiểu dữ liệu 1, kiểu dữ liệu 2> tên pair;
	//vd: pair<int, int> p;
	// pair<string, int> p;
	pair<int, int> v = {100, 200};
	v.first // truy cập phần tử 1; (pair<phần tử 1, phần tử 2>);
	v.second// truy cập phần tử 2;
	
	// ** kiểu tuple;
	// tuple<data1,data2,data3> name(pt1,pt2,pt3);
	//vd:
	tuple <int, int, int> t(1,2,3);
	cout << get<0>(t) << endl;
	
}
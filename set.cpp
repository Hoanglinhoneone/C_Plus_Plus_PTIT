#include<bits/stdc++.h>

using namespace std;

int main(){
	//******* set;// được sắp xếp từ bé đến lớn, các phần tử không trùng nhau
	// O(logn);
	// khai báo:
	// set<data> name;
	// vd:
	set<int> s;
	// name.insert(i);// thêm phần tử i vào set
	s.insert(100);
	//name.size()// trả về số lượng phần tử trong set;
	s.size();
	// name.count(i) // trả về 1 nếu i xuất hiện và trả về 0 nếu ngc lại;
	for(int i=0;i<10;i++){
		s.insert(i);
	}
	for(int x:s){
		cout << x << " ";// in các phần tử trong set;
	}
	for(auto  x : s){
		cout << x << " ";
	}
	if(s.count(5) != 0){
		cout << "YES" <<endl;
	}
	else cout << "NO" << endl;
	// name.find(i) // trả về vị trí cua i trong set;// nếu không tìm thấy trả về name.end().
	if(s.find(5) != s.end() ){
		cout << "YEs " << endl;
	}  
	else {
		cout << "NO" << endl;
	}
	
	cout << *s.begin() << endl; //phần tử đầu tiên của set;
	cout << *s.rbegin() << endl;// phần tử cuối cùng của set;
		
	s.end() //trỏ đến vị trí đứng sau phần tử cuối cùng của set;
	// name.erase(i)// xóa phần tử i khỏi  set;
	s.erase(5);
	
	
	//******** multiset<data> name; // sắp xếp từ bé đến lớn, các phần tử vẫn trùng nhau được.
	multiset<int> ms;
	for(int i=0;i<10;i++){
		ms.insert(i);// thêm phần tử
	}
	// về các hàm cũng giống như set;
	ms.erase(i)// xóa tất cả phần tử có giá trị i trong multiset;
	//nếu muốn xóa cụ thể chỉ 1 phần tử thì phải xóa qua vị trí bằng find().
	
	
	// *****unordered<data>name;// các phần tử lưu không trùng nhau và không có thứ tụ, xuất hiện bất kỳ.
	// các hàm cũng giống như 2 phần trên.
}
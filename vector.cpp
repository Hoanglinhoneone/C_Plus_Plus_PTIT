#include <iostream>
#include <Vector>
using namespace std;
int main(){
	// khai kháo:
//	vector< tên kiểu dữ liệu > tên vector;
 // vd: Vector<int> v;
    v.push_back(i);// thêm phần tử i vào cuối vector;
    v.size(); // trả về số lượng phần tử trong vector;
    v.back();// trả về phần tử cuối cùng của vector;
    for(int x : v){
    	cout << x << " "; // in các phần tử trong vector;
	}
	*max_element(vt1, vt2) // trả về max đoạn từ vt1=>vt2
	*min_element(vt1, vt2) // trả về min đoạn từ vt1 => vt2;
	accumulate(vt1, vt2, 0) // tính tổng từ vt1=>vt2;
	reverse(vt1, vt2)// lật ngược vector từ vt1=>vt2;
	v.empty() // tra về true nếu vector rỗng false nếu ngc lại.
	v.pop_back() // xoa 1 phan tu o cuoi vector;
	v.erase(vt); // vd:v.erase(v.begin()+3)  xóa phần tử ở vị trí chỉ định 
	v.begin(); // phần tử đầu tiên của vector;
	v.end(); //  vị trí sau phần tử cuối cùng.
	v.rebegin(); // phần tử cuối cùng của vector;
	v.rend();// phần tử trước pt đầu tiên của vector;
	v.insert(vt, gt) // vd: v.insert(v.begin()+2, 100); thêm gt vào vt chỉ định;
return 0; 
}

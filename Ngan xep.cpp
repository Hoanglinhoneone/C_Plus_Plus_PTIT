#include<bits/stdc++.h>
#include<stack> // Ngăn xếp
using namespace std;

// push : thêm phần tử vào ngăn xếp.
// pop : lấy 1 phần tử ra khỏi ngăn xếp.
// st.pop() : xoa phần tử trên cùng của stack
// top : lấy phần tử trên cùng của ngăn xếp.
// size : trả về số lượng trong ngăn xếp.
// empty : ktra xem ngăn xếp có rỗng k
// 5 hàm trên có dpt O(1);

int main(){
	
	// khai bao:
	stack<int> st;
	st.push(1);// thêm 1 vào ngăn xếp.
	st.push(2);// thêm 2...
	st.push(3);// thêm 3...
	cout << st.top() << endl;// in phần tử trên cùng của stack = 3
	st.pop(); // xóa phần tử trên cùng của stack; = 3
	cout << st.top();// in pt trên cùng = 2
	st.pop();
	st.pop();
	cout << endl;
	if(st.empty()){// kiem tra xeem ngan xep rong chua
		cout << "Ngan xep rong";
	}
	else {
		cout << st.top();
	}
	return 0;
	
}
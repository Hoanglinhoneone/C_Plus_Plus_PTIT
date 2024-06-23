#include<bits/stdc++.h>
#include<queue>
using namespace std;
// hàng đợi
// push : thêm phần tử vào cuối hàng đợi.
// pop : xóa phần tử ở đầu hàng đợi ra
// empty: kiểm tra xem hàng đợi có rỗng k.
// size: kích thước hàng đợi.
// front : lấy ra phần tử ở đầu hàng đợi.

int main(){
	// khai bao
	queue<int> q;
	q.push(1);// theem 1 va o hang doi
	q.push(2);// them 2
	q.push(3);// them 3
	q.push(4);// them 4
	cout << q.front()<<endl;// in phan tu dau tien cua hang doi
	q.pop();// xoa phan tu dau tien cua hang doi
	cout << q.front() << endl;// in phan tu dau tien cua hang doi sau khi xoa
	cout << q.size() ;// in ra so luong phan tu trong hang doi.
	cout << q.empty();// in ra 1 neu hang doi còn phần tử và 0 nếu ngược lại.
}
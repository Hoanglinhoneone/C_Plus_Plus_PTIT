#include<bits/stdc++.h>

using namespace std;

// binary_search O(logn);// các phần tử phải được sắp xếp tăng dần,giảm dần
// birary_search(a+x, a+n, key) ==> tìm kiếm key trong đoạn a[x] => a[y-1];
// birary_search(v.begin+x, v.begin+y, key) ==> tìm kiếm key trong đoạn v[x] => v[y-1];
// lower_bound(vi trị 1, vị trí 2, key) tìm kiếm trong [vt1,vt2) trả vềvị trí đầu tiên >= key.(dùng trong mảng sx,vector,set,map)
//(nếu không có phần tử nào >= key thì sẽ trả về vị trí cuối cùng)(a+n đối với mảng)(v.begin đối với vector);
// upper_bound(vt1,vt2,key) // trả về vị trí đầu tiên > key.
bool binary_search(int a[], int l, int r, int x) {
	
	if(l > r) return true;
	int m=(l+r)/2;
	if(a[m] == x){
		return true;
	}
	else if(a[m] < x){
		return binary_search(a, m+1, r,x);// nếu a[m] < x thì tìm kiếm khu vực bên trái.
	}
	else {
		return binary_search(a,l,m-1,x);// nếu a[m] > x thì tìm kiếm tiếp khu vực bên phải.
	}
}
int first_pos(int  a[], int n, int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m] == x){
			r=m-1;// tìm vị trí bên trái xem còn xuất hiện k;
			res=m;
		}
		else if(a[m] < x){
			l=m+1;
		}
		else {
			r=m-1;
		}
	}
	return res;// vị trí xuất hiện đầu tiên của x;
}
int last_pos(int a[], int n, int x){
	int res=-1;
	while(l <= r){
		int m=(l+r)/2;
		if(a[m]==x){
			r=m+1;// tìm kiếm ở bên phải xèm còn xuất hiện x không;
			res=m;
		}
		else if(a[m] < x){
			l=m+1;
		}
		else {
			r=m-1;
		}
	}
	return res;// vị trí xuất hiện x cuối cùng. 
}
int main(){
	int n,x;
	cin >> n >> x;
	int a[n];// tìm kiếm trong mảng/
	vector<int> v;// tìm kiếm trong vector.
	for(int i=0;i<n;i++){
		cin >> a[i];
		v.push_back(a[i]);
	}
	if(binary_search(a,0,n-1,x)){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	// hoặc có thể dùng hàm sẵn trong thư viện:
	if(binary_search(a, a+n, x)){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	if(binary_search(v.begin(), v.end(), x)){
		cout << "co" << endl;
	}
	else cout << "NO" << endl;
	auto it = lower_bound(a,a+n,x);
	cout << *it << endl; // in ra giá trị đầu tiên >= x trong mảng;
	cout << it-a << endl; // in ra vị trí đầu tiên >= x trong mảng;
	if(it == (a+n)){// đối với mảng
		cout << "khong co vi tri nao >= x" << endl;
	}
	auto it = lower_bound(v.begin(),v.end(),x);
	cout << *it << endl; // in ra giá trị đầu tiên >= x trong vector;
	cout << it-v.begin()<< endl; // in ra vị trí đầu tiên >= x trong vector;
	if(it == v.end()){// đối với vector
		cout << "khong co vi tri nao >= x" << endl;
	}
}
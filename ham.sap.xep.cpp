#include<bits/stdc++.h>

using namespace std;
// dùng cho mảng, vector, string, pair...
// Có thể viết tiêu chí sắp xếp cho hàm:
bool sx(int a, int b){
	return a > b;
}
bool sx(string a, string b){
	return a.size() > b.size();
}
int main(){
	
	// sort():
	sort(a, a + n, sx);
	int n; cin >> n;
	int a[n];// sx mảng
	string c[n];// sx xâu;
	vector<int> b(n);// sx vector;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cin >> b[i];
	}
	for(int i=0;i<n;i++){
		cin >> c[i];
	}
	sort(a, a+n); // sx tăng dần.
	sort(b.begin(), b.end());// sx tăng
	sort(c, c +n);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
		cout << b[i] << " ";
	}
	cout << endl;
	sort(a, a+n, greater<int>());// sx giảm dần;
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	sort(b.begin(), b.end(), greater<int>());// sx giảm
	for(int i=0;i<n;i++){
		cout << b[i] << " ";
	}
	sort(c, c+n, greater<string>());
	for(string x : c){
		cout << x << " ";
	}
	cout << endl;
	
	// ***stable_sort():// sx các phần tử theo tiêu chí, giữ lại thứ tụ ban đầu của 2 phần tử bằng nhau
	// vd: 1 -1 2  1 5 -2 -5 // sx tăng theo giá trị tuyệt đối.
	//     1 -1 1 2 -2 5 -5
	stable_sort(a, a+n);
}
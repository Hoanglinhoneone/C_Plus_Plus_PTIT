#include<bits/stdc++.h>

using namespace std;
int main(){
	// cấp phát & giải phóng bộ nhớ cho mảng động 2 chiều:
	//vd:
	int **a;// cấp phát bộ nhớ.
	int **b; 
	int **d;
	int h,c;cin >> h >> c;
    a = new int*[h];// cấp phát bộ nhớ cho các hàng.
    b= new int*[h];
    d= new int*[h];
    
    for(int i = 0; i<h; i++)
        a[i] = new int[c];// cấp phát bộ nhớ cho các phần tử trong hàng
        
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cin >> a[i][j];
		}
	}
	
    for(int i = 0; i<h; i++)
        b[i] = new int[c];
        
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cin >> b[i][j];
		}
	}
	cout << "Ma tran a:" << endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Ma tran b:" << endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i=0;i<h;i++){
			d[i] = new int[c];
	}
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			d[i][j] =  a[i][j]+b[i][j];
		}
	}
		cout << "Ma tran d:" << endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cout << d[i][j] <<" ";
		}
		cout << endl;
	}
	for(int i=0;i<h;i++){
		delete []d[i];
	}
	delete a;
	delete b;
	delete d; 
	cout << "Ma tran d sau khi thu hoi bo nho:" << endl;
	for(int i=0;i<h;i++){
		for(int j=0;j<c;j++){
			cout << d[i][j] <<" ";
		}
		cout << endl;
	}
}
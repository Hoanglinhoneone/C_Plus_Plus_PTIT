#include<bits/stdc++.h>

using namespace std;

int n,a[100],chc;
void tao(){
	for(int i=1;i<=n;i++){
		a[i]=0;// cau hinh dau tien full 0;
	}
}
void sinh(){
  
	while(i >=1 && a[i]==1){
		a[i]=0;// đảo bit
		--i;
	}
	if(i==0){
		chc=0;// tìm thấy cấu hình cuối.
	}
	else {
		a[i]=1;// nếu gặp bit 0 chuyển thành 1.
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		chc=1;
		tao();
		while(chc){
			for(int i=1;i<=n;i++){
				cout << a[i];// in cấu hình đã sinh
			}
			cout << " ";
			sinh();// sinh cấu hình tiếp theo.
		}
		cout << endl;
	}
}

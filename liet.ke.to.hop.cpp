#include<bits/stdc++.h>

using namespace std;
int n,k,a[100],check;
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i] = i;//khoi tao c/h dau tien chay tu 1==>k.
	}
}
void sinhcauhinh(){
	int i=k;// tao bien i=k de kiem tra tu i==>0;
	while(i >= 1 && a[i] == n-k+i){
		--i;// neu nhu i chua =0 va a[i] da dat gia tri max thi dich i sang trai.	
	}
	if(i==0){
		check=0;// khi i==0 co nghia da tim thay cau hinh cuoi chay tu k==>n;
	}
	else {
		a[i]++;
		for(int j=i+1;j<=k;++j){
			a[j]=a[j-1]+1;// tang cang phan tu tu a[i] len		
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		check=1;
		khoitao();
		while(check){
			for(int i=1;i<=k;i++){
				cout << a[i];
			}
			cout << " ";
			sinhcauhinh();
		}
		cout << endl;
	}
}
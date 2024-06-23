#include<bits/stdc++.h>

using namespace std;
int n,a[100],check;
//khoi tao cau hinh dau tien
void khoitao(){
	 for(int i=1;i<=n;i++){
	 	a[i]=0;//cau hinh dau full 0;
	 }
}
void sinh(){
	int i=n;
	while(i>=1 && a[i] == 1){
		a[i]=0;
		--i;
	}
	if(i==0){
		check = 0;// tim thay cau hinh cuoi cung;
	}
	else {
		a[i]=1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		khoitao();
		check =1;
		while(check){
		    for(int i=1;i<=n;i++){
			    cout << a[i] ;
		    }
		    cout << " ";
		    sinh();
	    }
	    cout << endl;
    }
}
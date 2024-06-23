#include<bits/stdc++.h>

using namespace std;
void swap(int &a,int &b){
	int t=a;
	    a=b;
	    b=t;
}
int n,a[100],check;
void khoitao(){
	for(int i=1;i<=n;i++){
		a[i]=i;// tao cau hinh dau tien chay tu 1==> n;
	}
}
void sinhcauhinh(){
	int i=n-1;
	while(i>=1 && a[i] > a[i+1]){
		--i;
	}
	if(i==0){
		check=0;//tim thay cau hinh cuoi cung chay tu n==>1;
	}
	else {// tim phan tu tu i+1==>n ma lon hon a[i];
		int j=n;
		while(a[i] > a[j]){
			--j;
		}
		swap(a[i],a[j]);// doi cho roi dao nguoc tu i+1==>n;
		reverse(a+i+1,a+n+1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		check=1;
		khoitao();
		while(check){
		    for(int i =1;i<=n;i++){
			    cout << a[i];
		    }
		    cout << " ";
	    	sinhcauhinh();
	    }
		cout  << endl;
	}
	return 0;
}
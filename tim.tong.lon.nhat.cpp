#include<bits/stdc++.h>

using namespace std;
void nhap(int a[],int m){
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
}
int tongmax(int a[],int b[],int m,int n){
	int sum=0;
	int sum1=0;
	for(int i=0;i<m;i++){
		sum1+=a[i];
		int sum2=0;
		for(int j=i+1;j<n;j++){
			sum2+=b[j];
		}
		if(sum1 + sum2 > sum){
			sum = sum1 + sum2;
		}
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		int a[m],b[n];
		nhap(a,m);
		nhap(b,n);
		int max1=tongmax(a,b,m,n);
		int max2=tongmax(b,a,n,m);
		if(max2>max1){
			max1=max2;
		}
		cout << max1 << endl;
	}
}

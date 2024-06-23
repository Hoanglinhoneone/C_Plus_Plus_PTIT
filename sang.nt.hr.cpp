#include<bits/stdc++.h>

using namespace std;
int a[100000];
void sang(){
	for(int i=2;i<=100000;i++){
		a[i]=1;
	}
	a[0] = a[1] = 0;
	for(int i=2;i<=100000;i++){
		if(a[i]){
			for(int j=2*i;j<=100000;j+=i){
				a[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int n;
	cin >> n;
	for(int i=0;i<=n;i++){
		if(a[i]) cout << i << " ";
	}
}
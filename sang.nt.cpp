#include<bits/stdc++.h>

using namespace std;

int a[100000];
void sangnt(){
	for(int i=2;i<10000;i++){
	    a[i]=1;	
	}
	for(int i=2;i<10000;i++){
		if(a[i]){
			for(int j=i*i;j<10000;j+=i){
				a[j] = 0;
			}
		}
	}
}
int main(){
	sangnt();
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		if(a[i]){
			cout << i << " " ;
		}
	}
}
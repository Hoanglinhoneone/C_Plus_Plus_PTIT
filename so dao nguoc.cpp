#include<iostream>

using namespace std;


int main(){
	int n;
	int a[n];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		int x=0;
 	while(a[i] != 0){
 		int y=a[i] % 10;
 		x = x * 10 + y;
 	    a[i]/=10;
	}
	    if(x == a[i]){
			cout << a[i] << " ";
		}
	}
}

#include<iostream>

using namespace std;
 
 int main(){
 	int t,n;
 	cin >> t;
 	for(int i=t;i>0;i--){
 		cin >> n;
 		int sum=0;
 		for(int i=1;i<=n;i++){
 			sum += i;
		 }
		 cout << sum << endl ;
	 }
	 return 0;
 }

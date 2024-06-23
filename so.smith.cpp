#include<bits/stdc++.h>

using namespace std;

int checksnt(int n){
	if(n<2){
		return 1;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}

int sumchuso(int n){
	int sum=0;
	while(n!=0){
		int x=n%10;
		sum+=x;
		n/=10;
	}
	return sum;
}

int uocsnt(int n){
	int sum1=0;

	for(int i = 2 ;i<=sqrt(n);i++){
	        while(n%i==0){
		        n/=i;
		        sum1+=sumchuso(i);
	        }
	}
	        if(n>1){
		        sum1 += sumchuso(n);
	        }
   return sum1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(checksnt(n)){
			if(sumchuso(n)==uocsnt(n)){
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
		else {
			cout << "NO" << endl;
		}
		
	}
}

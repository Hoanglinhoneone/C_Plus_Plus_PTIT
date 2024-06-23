#include<iostream>

using namespace std;
    
    int check(int n){
    	int sum =0;
    	while(n != 0){
    		int x = n % 10;
    		sum += x;
    		n/=10;
		}
		if(sum % 10 == 9){
			return 1;
		}
	}
int main(){
    int n;
    cin >> n;
    if(check(n)==1){
    	cout << "YES";
	}
	else {
		cout << "NO";
	}
}

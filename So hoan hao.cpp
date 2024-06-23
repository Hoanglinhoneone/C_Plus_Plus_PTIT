#include<iostream>

using namespace std;

int main(){
	long long n;
	cin >> n;
	long long  sum = 0;
	if(n<6){
		cout << "NO";
	}
	else {
     	for(long long i=1;i<n;i++){
		    if(n % i==0){
			    sum = sum + i;
		    }
	    }
    	if(sum == n){
		    cout << "YES";
	    }
	    else {
		    cout << "NO";
	    }
    }
	return 0;
}

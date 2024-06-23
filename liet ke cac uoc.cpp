#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n==0){
		cout << "INF";
	}
	else {
	    int x = abs(n);
	    for(int i=x; i>=1;i--){
		    if(x%i == 0){
			    cout << i << " ";
		    }
        }
	}    
	return 0;
}

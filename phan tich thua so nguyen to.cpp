#include <iostream>
#include <math.h>
using namespace std;
 
 
int main(){
    int n;
    cin >> n;
    int dem;
    for(int i = 2; i < sqrt(n); i++){
        dem = 0;
        while(n % i == 0){
            ++dem;
            n /= i;
        }
        if(dem){
            cout << i;
            if(dem == 1) cout << " " << 1;
            if(dem > 1) cout << " " << dem ;
            if(n > i){
                cout << endl;
            }
            else {
            	cout << n;
			}
        }
    }  
}

#include<iostream>

using namespace std;

int main(){
	
    long long n;
    cin >> n;
    
    long long i =  1;
    long long dem = 0;
    while(n != 0){
        if(n % i == 0){
            n /= i;
            dem++;
        }
        i++;
    }
    cout << dem ;
}

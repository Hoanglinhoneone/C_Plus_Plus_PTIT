#include<iostream>

using namespace std;

int main(){
	
    long long n;
    cin >> n;
    int dem = 0;
    for(long long i=1;i<=n;i++){
        if(n % i == 0){
            dem++;
        }
    }
    cout << dem ;
}

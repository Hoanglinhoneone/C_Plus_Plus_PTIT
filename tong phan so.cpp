#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double sum=0;
    if(n>= 2 && n<=1000){
    for(int i=2;i<=n;i++){
        sum = sum + 1/i;
    }
    cout << setprecision(4) << fixed << sum;
    }
    return 0;
}

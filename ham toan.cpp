#include<iostream>
#include<math.h>
#include<iomanip>
int gt(int n){
    if(n==0){
        return 1;
    }
    else return n*gt(n-1);
}

using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    float sum=0;
    for(int i = 1;i<=n;i++){
        sum = sum + (pow(x,i))/(gt(i));
    }
    cout << setprecision(2) << fixed << sum;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool check(ll n){
    if(n < 2 || n % 2 == 0) return false;
    if(n == 2) return true;
    for(ll i = 3; i <= sqrt(n); i+=2){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int t;cin >> t;
    while(t--){
        ll n;cin >> n;
        ll uoc_max = 0;
        for(ll i = 1; i <= sqrt(n);i++){
            if(n % i == 0){
                ll j = n / i;
                if(check(i)){
                    uoc_max = max(uoc_max , i);
                }
                if(check(j)){
                    uoc_max = max(uoc_max , j);
                }
            }
        }
        cout << uoc_max << endl;
    }

}

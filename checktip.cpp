#include <bits/stdc++.h>

using namespace std;

bool nt[1000001];
vector <int> v;

void Sang(){
    nt[0] = nt[1] = false;
    for(int i = 2; i < 1000001; i++) nt[i] = true;
    for(int i = 2; i <= 1000; i++){
        if(nt[i]){
            for(int j = i*i;j < 1000001; j+=i){
                nt[j] = false;
            }
        }
    }
    for(int i = 2; i < 1000001; i++){
        if(nt[i]) v.push_back(i);
    }
}

int main(){   
    int t;cin >> t;
    Sang();   
    while(t--){
        int n;cin >> n;
        int check = 0;
        for(int i = 0; i < v.size(); i++){
            if(check == 0){
                int x = n - v[i];
                if(x > 0 && nt[x] == true){
                    cout << v[i] << " "<< x << endl;
                    check = 1;
                } 
            }else{
                break;
            }
        }
    }
}

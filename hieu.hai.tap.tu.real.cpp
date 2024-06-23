

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        set<string> d1;
        set<string> d2;
        stringstream ss(s1);
        string token1;
        while(ss >> token1){
            d1.insert(token1);
        }
        stringstream sss(s2);
        string token2;
        while(sss >> token2){
            d2.insert(token2);
        }
        for(auto x: d1){
            if(d2.find(x) == d2.end()){
                cout << x << " ";
            }
        }
        cout << endl;
    
}

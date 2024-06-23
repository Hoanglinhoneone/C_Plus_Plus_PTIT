#include <bits/stdc++.h>

using namespace std;

int tongchuso(string s){
    int l=s.length();
    int sum=0; 
    for(int i=0;i<l;i++){
        sum+=(s[i]-'0');
    } 
    if(sum<10) 
    return sum; 
    return tongchuso(to_string(sum)); 
    
} 
int main(){ 
    int t; 
    cin>>t;
    cin.ignore();
    while(t--){ 
        string s; 
        getline(cin,s);
        if(tongchuso(s)==9) cout<<"1"<<endl;
        else cout<<"0"<<endl; 
    } 
}

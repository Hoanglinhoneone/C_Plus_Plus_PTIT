#include<iostream>

using namespace std;

#define intt long long

int ucln(intt a,intt b){
    if(a==0 || b == 0){
        return a + b;
    }
    while(a!=b){
        if(a>b){
            a-=b;
        }
        else {
            b-=a;
        }
    }
    return a;
}
int main(){
    intt s1,s2,s3,d,r,c;
    cin >> s1 >> s2 >> s3 ;
    c = ucln(s1,s2);
    d = s1/c;
    r = s2/c;
    cout << 4*c+4*d+4*r;
}

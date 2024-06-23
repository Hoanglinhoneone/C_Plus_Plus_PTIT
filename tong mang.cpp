#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int t=-1;
    for(int i=0;i<s.size();i++){
        if(s[i] == c ){
            t=i;
            break;
        }
    }
    cout << t;
    return 0;
}


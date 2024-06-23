#include <bits/stdc++.h>

using namespace std;

struct  SinhVien
{
    string name , lop , ns , msv;
    float gpa;
    void chuanhoa(){
        stringstream ss(name);
        string token , kq="";
        while(ss >> token){
            token[0] = toupper(token[0]);
            for(int i = 1; i < token.length();i++) token[i] = tolower(token[i]);
            kq = kq + token + " ";
        }
        kq.erase(kq.length()-1);
        name = kq;
    }
};

void nhap(SinhVien ds[] , int n){
    for(int i = 0 ;i < n ; i++){
        ds[i].msv = "B20DCCN" + string(3-to_string(i+1).length() ,'0') + to_string(i+1);
        cin.ignore();
        getline(cin , ds[i].name);
        cin >> ds[i].lop;
        cin >> ds[i].ns;
        cin >> ds[i].gpa;
        if(ds[i].ns[2] != '/') ds[i].ns.insert(0,"0");
        if(ds[i].ns[5] != '/') ds[i].ns.insert(3,"0");
        ds[i].chuanhoa();
    }
}


void in(SinhVien ds[] , int n){
    for(int i = 0 ; i < n; i++){
        cout << ds[i].msv << " " << ds[i].name << " " << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

bool cmp(SinhVien a , SinhVien b){
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[] , int n){
    sort(ds , ds + n , cmp);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
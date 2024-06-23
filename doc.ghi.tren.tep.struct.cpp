#include<bits/stdc++.h>

using namespace std;
const int length = 25;

struct NhanVien{
	string mnv, name;
	float hsl, lcb, pc;
};
int main(){
	int n;
	cin >> n;
	NhanVien nv;
	/* Ghi dữ liệu vào tệp tin */
	fstream f("Nhan.vien", ios::in | ios::binary);
	for(int i=0;i<n;i++){
		NhanVien nv;
        cin >> nv.mnv;
        cin.ignore(); 
        getline(cin, nv.name);
        cin >> nv.hsl >> nv.lcb >> nv.pc;
        // Ghi dữ liệu vào tệp
        f.write(reinterpret_cast<char *>(&nv),sizeof(nv));
    }
    f.close(); // Đóng tệp tin 
    
    // đọc dữ liệu:
    while(f){
    NhanVien nvm
    f.open("Nhan.vien",ios::out|ios::binary);
    f.read(reinterpret_cast<char *>(&nvm), sizeof(nv));
    cout << "DU lieu doc duoc la: " << endl;
         	cout << nvm.mnv << " " << nvm.name << " " << nvm.hsl <<" ";
    	    cout << nvm.lcb << " " << nvm.pc << endl;
    }
	f.close();

}
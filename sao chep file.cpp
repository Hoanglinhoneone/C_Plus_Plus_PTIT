#include<bits/stdc++.h>
using namespace std;

int main(){
	char fileNguon[25], fileDich[25], data;
	cout << "Nhap ten file nguon: ";
	cin >> fileNguon;
	cout << "Nhap ten file dich: ";
	cin >> fileDich;
	ifstream fileIn(fileNguon, ios::in);
	if(!fileNguon){
		cout << "Khong the mo file nguon " << fileNguon << endl;
		exit(1);
	}
	ofstream fileOut(fileDich, ios::out);
	if(!fileDich){
		cout << "Khong the tap duoc file dich " << fileDich << endl;
		exit(1);
	}
	while(fileIn){
		fileIN >> data;
		fileOut << data;
	}
}
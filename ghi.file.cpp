#include<bits/stdc++.h>

using namespace std;

int main(){
	char fileName[25], input;
	cout << "Nhap ten file can mo de ghi: ";
	cin >> fileName;
	ofstream myFile (fileName, ios::out);
	if(!myFile) {
		cout << "khong the tao duoc file" << endl;
		exit(1);
	}
	do {
		cin >> input;
		myFile << input;
	} while((input != 'e')&&(myFile));
	cout << endl;
	myFile.close();
	
	return 0;
}
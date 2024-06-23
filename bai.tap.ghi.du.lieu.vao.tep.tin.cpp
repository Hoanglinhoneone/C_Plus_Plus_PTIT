#include<bits/stdc++.h>

using namespace std;

int main(){
	char fileName[25], input, output;
	cout << "Nhap ten tep tin: ";
	cin >> fileName ; // nhap tep tin.
/*	ofstream fileOut(fileName, ios:: out);// khai bao va mo tep tin.
	if(!fileOut){
		cout << "Khong mo duoc tep tin " << fileName << endl;
		exit(1);
	}
	// Ghi du lieu vao tep tin:
	do {
		cin >> input;
		fileOut << input << ' ';// ghi ky tu vao tep tin.
	} while((input != 'e')&&(fileOut));
	fileOut << endl;
	fileOut.close();
	*/
	ifstream fileIn(fileName, ios::in);
	if(!fileIn){
		cout << "Khong the mo tep tin " << fileName << endl;
		exit(1);
	}
	while(fileIn){
		fileIn >> output; // doc ky tu tu tep tin
		cout << output << " "; // ghi ky tu ra man hinh.
	}
	cout << endl;
	fileIn.close();
	return 0;
}
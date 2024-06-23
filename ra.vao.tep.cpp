#include<bits/stdc++.h>
#include<fstream>

using namespace std;
const int lenght =25;
int main(){
	char fileName[length], input;
	cout << "Ten tep tin";
	cin >> setw(length)>> fileName;// nhập tên tệp tin;
	// mở tệp tin:
	fstream fileOut(fileName, ios::out);// khai báo và mở tên tệp tin
	if(!fileOut){// không mở được tệp
	    cout << "khong tao duoc tep tin" << fileName << endl;
	    exit(1);
	} 
	// ghi dữ liệu vào tệp tin:
	do {
		cin >> input ; // đọc kí tự từ bàn phím
		fileOut << input << ' ' ; // ghi kí tự vào tệp tin
	} while((input != 'e') && (fileOut));
	
	fileOut << endl;// xuống dòng cuối tệp tin
	// đóng tệp tin:
	fileOut.close();
	return;
}
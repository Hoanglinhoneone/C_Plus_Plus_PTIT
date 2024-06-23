#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
const int length = 25;
 main(){
    char fileName[length], output;
    cout << "Ten tep tin ";
    cin >> setw(length) >> fileName;// nhập tệp tin;
    // mở tệp tin:
    fstream fileIn(fileName, ios::in);// khai bao va mo tep tin;
    if(!fileIn){
    	// không mở được
    	cout << "Khong the mo tep tin " << fileName << endl;
    	exit(1);
	}
	// đọc dữ liệu ra màn hình:
	while(fileIn >> output){
		cout << output;// ghi ki tu ra man hinh.
	}
	cout << endl;
	fileIn.close();
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    char fileName[25], output;
    cout << "Hay nhap ten file can doc: " ;
    cin >> fileName ;
    ifstream myFile (fileName, ios::in);
	if(!myFile){
		cout << "Khong tim thay tep tin de mo" << endl;
		exit(1);
	} 
	while(myFile){
		myFile >> output;
		cout << output;
	}
	cout << endl;
	myFile.close();
	return 0;
}
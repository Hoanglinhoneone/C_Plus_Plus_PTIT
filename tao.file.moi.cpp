#include<bits/stdc++.h>

using namespace std;

int main(){
	char fileName[25], input;
	cin >> fileName;
	ofstream myFile(fileName, ios::out);
	do{
		cin >> input;
		myFile << input;
	} while((input != '1') && (myFile));
	myFile.close();
	return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
	int y;
	cin >> y;
	if(y <= 0 || y > 100000){
		cout << "INVALID";
	}
	else {
		if( (y % 4 ==0 && y % 100 != 0) || (y % 400 ==0) ){
			cout << "Yes";
		}
		else {
			cout << "No";
		}
	}
}

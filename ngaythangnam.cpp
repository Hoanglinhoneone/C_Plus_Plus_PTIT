#include<iostream>

using namespace std;

int main(){
	int m,y;
	cin >> m >> y;
	if((m <= 0 || m > 12) || (y <= 0 || y > 100000)){
		cout << "INVALID";
	}
	else {
		if(m == 1 || m == 3 || m == 5 || m ==7 || m ==8 || m == 10 || m ==12){
			cout << 31;
		}
		else if(m == 4 || m == 6 || m == 9 || m == 11){
			cout << 30;
		}
		else {
			if(y % 400 == 0 || y % 4 == 0 && y % 100 != 0){
			    cout << 29;
			}
			else {
				cout << 28;
			}
		}
	}
	return 0;
}

#include<iostream>

using namespace std;

int main(){
	double x;
	cin >> x ;
	if(x<0){

	cout << (int)x - 1 << " ";
	cout << (int)x ;
}
else {
	cout << (int)x << " ";
	cout << (int) x +1;
}
	return 0;
}

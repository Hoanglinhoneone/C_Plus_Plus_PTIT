#include<iostream>

using namespace std;

int main(){
	  int t;
	  cin >> t;
	  while(t--){
	  	string s;
	  	cin >> s;
	  	int vitri = s.find("084");
	  	string xoa=s.erase(vitri,3);
	  	cout << xoa << endl;
	  }
	  return 0;
}

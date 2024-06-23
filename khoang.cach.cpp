#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		double a,b,c,d;
		cin >> a >> b >> c >> d;
		double x=abs(c-a),y=abs(d-b);
		double kq=sqrt(pow(x,2)+pow(y,2));
		cout << setprecision(4) << fixed << kq << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	float a,b,c,x1,x2,Delta,x;
	cin >> a >> b >> c ;
	Delta = pow(b,2)-4*a*c;
	x=-c/b;
	x1=(-b+sqrt(Delta))/(2*a);
	x2=(-b-sqrt(Delta))/(2*a);
	
	if(a=0){
		if(b!=0){
			if(c!=0){
			cout << setprecision(2) << fixed << x ;
		    }
		    else {
		    	cout << "INF";
			}
		}
		else {
			cout << "No" ;
		}
	}
	else {
		if(Delta < 0){
			cout << "NO";
		}
		else if(Delta = 0){
			cout << -b/(2*a);
		}
		else {
			if(x1>x2){
				int t=x1;
				    x1=x2;
				    x2=t;
			}
			cout << setprecision(2) << fixed<< x1 << " ";
			cout << setprecision(2) << fixed<< x2;
		}
	}
	return 0;
}

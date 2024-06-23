#include<bits/stdc++.h>

using namespace std;
float quydoi(float a){
	if(a >= 3 && a <= 4 ){
			return  2.5;
		}
	else if( a >= 5 && a <= 6 ) {
			return  3.0;
		}
		else if ( a >= 7 && a <= 9){
			 return 3.5;
		}
		else if( a >= 10 && a <= 12){
			return 4.0;
		}
		else if(a >= 13 && a <= 15){
			return 4.5;
		}
		else if(a >= 16 && a <= 19){
			return 5.0;
		}
		else if( a >= 20 && a <= 22){
			return 5.5;
		}
		else if( a >= 23 && a <= 26){
			return 6.0 ;
		}
		else if( a >= 27 && a <= 29){
			return 6.5 ;
		}
		else if( a >= 30 && a <= 32){
			return  7.0;
		}
		else if( a >= 33 && a <= 34){
			return  7.5;
		}	
		else if( a >= 35 && a <= 36){
			return 8.0 ;
		}
		else if( a >= 37 && a <= 38){
			return 8.5;
		}
		else if( a >= 39 && a <= 40){
			return 9.0;
		}
}

int main(){
	int t; cin >> t;
	while(t--){
		float a, b, c, d;
		cin >> a >> b >> c >> d;
		int tong = (quydoi((a) + quydoi(b) + c +d))/4;
		float tong1 = (quydoi((a) + quydoi(b) + c +d))/4;
		float x = tong1-tong;
		if(x < 0.25){
			cout << fixed << setprecision(1) << tong1-x << endl;
		}
		else if(x >= 0.25 && x <= 0.5){
			cout << fixed << setprecision(1) << tong1-x+0.5 << endl;
		}
		else if((x >= 0.5) && (x < 0.75	)){
			cout << fixed << setprecision(1) << tong1-x+0.5 << endl;
		}	else {
				cout << fixed << setprecision(1) << tong1-x+1 << endl;
		}
	}
	return 0;
}
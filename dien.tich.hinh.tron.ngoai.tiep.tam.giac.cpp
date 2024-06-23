#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
struct point{
	double x,y;
	double distance(point p){
		return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
	}
};
void check(point a, point b, point c){
	double x1=a.distance(b);
	double x2=b.distance(c);
	double x3=a.distance(c);
	if(x1 <= 0 || x2 <= 0 || x3 <= 0 || x1+x2<=x3 ||x1+x3 <= x2 || x2+x3 <= x1){
		cout << "INVALID" << endl;
		return;
	}
	double p=(x1+x2+x3)/2;
	double dt=sqrt(p*(p-x1)*(p-x2)*(p-x3));
	double r=(x1*x2*x3)/(4*dt);
	cout << fixed << setprecision(3) << PI*r*r << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    	point a,b,c;
    	cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    	check(a,b,c);
	}
}
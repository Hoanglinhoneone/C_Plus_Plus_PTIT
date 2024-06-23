#include<bits/stdc++.h>

using namespace std;
long long lcm(long long a,long long b){
	long long bcnn=(a*b)/__gcd(a,b);
	return bcnn;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x,y,z;
		long long n;
		long long a=pow(10,n-1);
		long long b=pow(10,n);
		cin >> x >> y >> z >> n;
		long long g=lcm(x,y);
		long long h=lcm(g,z);
		long long i=(long long)(a+h-1)/h*h;
		if(i<b){
			cout << i << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}


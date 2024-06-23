#include<bits/stdc++.h>

using namespace std;
long long gcd(long long a,long long b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
long long lcm(long long a,long long b){
	return a/gcd(a,b)*b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long x,y,z;
		long long n;
		cin >> x >> y >> z >> n;
		long long h=lcm(lcm(x,y),z);
		long long a=pow(10,n-1);
		long long b=pow(10,n);
		long long i=(a+h-1)/h*h;
		if(i<b){			
		    cout << i << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}


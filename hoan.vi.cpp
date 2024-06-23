#include<bits/stdc++.h>

using namespace std;
void hoanvi(int *a,int *b){
	int t=*a;
	    *a=*b;
	    *b=t;
}

int main(){
	int a,b;
	cin >> a >> b;
	hoanvi(&a,&b);
	cout << a << " " << b;
}
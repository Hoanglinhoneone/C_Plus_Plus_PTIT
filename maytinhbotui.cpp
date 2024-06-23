#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main(){
	double a,b;
	string s;
	
	cin >> a >> s >> b;
	switch (s)
	{
	    case '+':
	    	cout << setprecision(2)<<fixed<<a+b;
	    	break;
	    case '-':
	    	cout << setprecision(2)<<fixed<<a-b;
	        break;
	    case '*':
	    	cout << setprecision(2)<<fixed<<a*b;
	    	break;
	    case '/':
	    	if(b!=0){
	    	cout << setprecision(2)<<fixed<<a/b;
	        }
	        else{
	        	cout << "Math Error";
			}
	    	break;
}

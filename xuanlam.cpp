#include<bits/stdc++.h>
using namespace std;
int check(long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(check(i)) cout<<i<<" ";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int ngto(int n)
{
	int i;
	if(n<2) return 0;
	if(n==2) return 1;
	if(n>2)
	{
		for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){ 
		return 0;
		}
	}
	return 1;
	}
 } 
 int main()
 {
 	int t;
 	cin >> t;
 	while(t--)
 	{
 		int n,i;
 		cin >> n;
 		for(i=2;i<=sqrt(n);i++)
 		{
 			if(ngto(i)&&ngto(n-i))
 			{ 
 			cout << i << " " << n-i << endl;
 			break;
			 }
		 }
	 }
	 return 0;
 }

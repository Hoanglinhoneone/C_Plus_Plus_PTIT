#include<bits/stdc++.h>
using namespace std;
int tong1(long long n)
{
	int sum=0;
	while(n>0)
	{
		int r=n%10;
		sum+=r;
		n/=10;
	}
	return sum;
	
}
int tong2(long long n)
{
	int sum=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			sum+=tong1(i);
			n/=i;
		}
	}
	if(n!=1) sum+=tong1(n); 
	return sum;
}
int main()
{
	long long n;
	cin>>n;
	int sum1=tong1(n);
	int sum2=tong2(n);
	if(sum1==sum2) cout<<"YES";
	else cout<<"NO";
	return 0;
}
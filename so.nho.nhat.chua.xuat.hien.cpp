#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int min=a[n-1];
		int x,dem1=0,dem2=0;
		for(int i=0;i<n-1;i++){
			if(a[i] == a[i+1])
			{
				dem1++;
			}
			
		}
		if(dem1==n-1 && a[0]==1)
		{
			cout << 2 << endl;
		}
		if(dem1==n-1&&a[0]==0)
		{
			cout << 1 << endl;
		}
		for(int i=0;i<n-1;i++)
		{
			if(a[i]<1)
			{
				dem2++;
			}
		}
		if(dem2==n)
		{
			cout << 1 << endl;
		}
	
		for(int i=0;i<n-1;i++){
			if(a[i] > 0 && a[i] <= min){
				min=a[i];
				x=min;
			}
			if(min == a[i]){
				min++;
			}
	    }
	    if(x==1){
		cout << min+1 << endl;
	    }
	    for(int i=0;i<n-1;i++){
			if(a[i] > 0 && a[i] < min){
				min=a[i];
				x=min;
			}
			if(min !=1){
				cout << 1 <<endl;
				break;
			}
	}
}
return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
		int n;
		cin >> n;
		double a[n+1];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a, a+n);
		double x=a[0],y=a[n-1];
		double sum=0;
		int dem=0;
		for(int i=1;i<n-1;i++){
			if(a[i] != x && a[i] != y ){
				sum+=a[i];
				dem++;
			};
		}
		sum = sum/dem;
		cout << fixed << setprecision(2) << sum ;
	return 0;
}
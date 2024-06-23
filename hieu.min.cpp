#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int  i=0;i<n;i++){
			cin >> a[i];
		}
		for(int  i=0;i<n;i++){
			if(a[i] >= a[i+1]){
				long long t=a[i];
				        a[i]=a[i+1];
				        a[i+1] = t;
			}
		}
		for(int  i=0;i<n;i++){
			cout << a[i] <<" ";
		}
	/*	long long min=a[1]-a[0];
		for(int i=2;i<n;i++){
			if(a[i]-a[i-1] <= min){
				min = a[i]-a[i-1];
			}
	    }
	    cout << min << endl;
	    */
    }
}

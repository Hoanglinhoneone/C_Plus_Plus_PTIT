#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n ;
		long long a[n];
		for(long i=0;i<n;i++){
			cin >> a[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			if(a[i] != 0){
				cout << a[i] << " ";
			}
			else {
				dem++;
			}
		}
		if(dem > 0){
		    for(int i=0;i<dem;i++){
		    	cout << "0" << " ";
		    }
		}
		cout << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long a[n];
		for(long i=0;i<n;i++){
			cin >> a[i];
		}
		set<int> s;
		for(long i=0;i<n;i++){
			int d=a[i];
			while(d>0){
				int x=d%10;
				s.insert(x);
				d/=10;
			}
		}
		for(int x:s){
			cout << x << " ";
		}
		cout << endl;
	}
}

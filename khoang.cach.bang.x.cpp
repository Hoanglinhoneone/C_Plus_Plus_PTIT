#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int check=0;
		for(int i=0;i<n;i++ ){
			if(binary_search(a, a + n, a[i] + x) == 1){
				check = 1;
				break;
			}
		}
		if(check == 1){
			cout << "1" << endl;
		}
		else {
			cout << "-1 " << endl;
		}
	}
}
#include<bits/stdc++.h>

using namespace std;
int snt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(i==1){
				cout << 1 << " ";
				continue;
			}
			if(snt(i)){
				cout << i << " ";
				continue;
			}
			if(i%2==0 && i > 2){
				cout << 2 << " ";
				continue;
			}
			else{
				if(i > 3)
				cout << 3 << " ";
				continue;
			}			
		}
		cout << endl;
	}
}

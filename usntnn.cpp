#include<bits/stdc++.h>

using namespace std;
int b[10000];
void sang(){
	b[0]=b[1]=0;
	for(int i=2;i<10000;i++){
		b[i]=1;
	}
	for(int i=2;i<1000;i++){
		if(b[i]==1){
			for(int j=i*i;j<10000;j+=i){
				b[j]=0;
			}
		}
	}
}
int chia(int n){
	for(int i=0;i<n;i++){
		if(b[i]==1){
			if(n % i==0){
				return i;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		int n;
		cin >> n;
		cout << 1 << " ";
		for(int i=2;i<=n;i++){
			cout << chia(i) << " ";
	    }
	    cout << endl;
    }
}

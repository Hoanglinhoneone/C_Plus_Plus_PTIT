// sang nguyen to
#include<iostream>
#include<math.h>

using namespace std;
int snt[10000];

void sang(){
	snt[0]=snt[1]=0;
	for(int i=2;i<=10000;i++){
		snt[i]=1;
	}
	for(int i=2;i<=1000;i++){
		if(snt[i]==1){
			for(int j=i*i;j<=10000;j+=i){
				snt[j]=0;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		sang();
		cin >> n;
		for(int i=0;i<=n;i++){
			if(snt[i]==1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}

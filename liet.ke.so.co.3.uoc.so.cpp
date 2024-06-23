#include<iostream>
#include<math.h>

using namespace std;
int s[1001];
void sang(){
	for(int i=2;i<=1000;i++){
		s[i]=1;
	}
	s[0]=s[1]=1;
	for(int i=2;i<=100;i++){
		for(int j=i*i;j<=1000;j+=i){
			s[j]=0;
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
		for(int i=2;i<=sqrt(n);i++){
				if(s[i]==1){
					cout << pow(i,2) << " ";
				}
		}
		cout << endl;
	}
}

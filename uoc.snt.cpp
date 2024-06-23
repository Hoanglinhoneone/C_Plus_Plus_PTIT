#include<iostream>
#include<math.h>

using namespace std;
int s[100001];
void sang(){
	s[0]=s[1]=0;
	for(int i=2;i<=100000;i++){
		s[i]=1;
	}
	for(int i=2;i<=1000;i++){
		if(s[i]==1){
			for(int j=i*i;j<=100000;j+=i){
				s[j]=0;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	sang();
	while(t--){
		long long n;
	    cin >> n;
	for(int i=2;i<=n;i++){
		if(s[i]==1 && n & i ==0){
			while(n%i==0){
				n /= i;
	        cout << i << " ";
			}
			
		}
	}
	cout << endl;
	}
	return 0;
}

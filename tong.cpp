#include<iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int sum=0;
	for(int i=1;i<=3*n+1;i++){
		if(i%2==0){
			sum -=i;
		}
		else {
			sum +=i;
		}
	}
	cout << sum << endl;
}
}

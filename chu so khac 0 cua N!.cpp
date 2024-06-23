#include<bits/stdc++.h>

using namespace std;
int dem(int n, int p){
	int res = 0;
	while(n>=p){
		res += n/p;
		n/=p;
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	int dem0 = dem(n, 5);
	int cnt2 = 0, cnt5 = 0;
	int res = 1;
	
	for(int i=1 ; i <=n;i++){
		int j = i;
		while(cnt2 < dem0 && j%2==0){
			cnt2++;
			j/=2;
		}
		while(cnt5 < dem0 && j%5==0){
			cnt5++;
			j/=5;
		}
		res*=j;
		res%=10;
	}
	cout << res;
}
     
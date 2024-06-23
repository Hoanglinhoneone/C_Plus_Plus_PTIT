#include<bits/stdc++.h>

using namespace std;
set<long long > se;
void fibonacci(){
	int f[93];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=93;i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=0;i<=93;i++){
		se.insert(f[i]);
	}
}

int main(){
	fibonacci();
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int max1=-1;long long max2=0,cot;
		for(int i=0;i<m;i++){
			int dem=0;
			long long sum=0;
			for(int j=0;j<n;j++){
				if(se.count(a[i][j])==1){
					dem++;
					sum+=a[i][j];
				}
			}
			if(dem > max1){
				max1=dem;
				cot=i;
				max2=sum;
			}
			else if(dem == max1){
				if(sum > max2){
					max2=sum;
					cot = i;
				}
			}
		}
		cout << cot + 1 << endl;
		for(int i=0;i<n;i++){
			if(se.count(a[i][cot])==1){
				cout << a[i][cot]<<" ";
			}
		}
		cout << endl;
	}
}
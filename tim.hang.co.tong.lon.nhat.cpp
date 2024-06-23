#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		vector<int> v;
		long long max=INT_MIN;
		for(int i=0;i<n;i++){
			long long sum=0;
			for(int j=0;j<m;j++){
				sum += a[i][j]; // tinh tong cua hang
			}
			if(sum > max){
				max=sum;
				v.clear();// xoa cac phan tu trong vector
				v.push_back(i+1);//them hang i vao vector
			}
			else if(sum == max){
				v.push_back(i+1);
			}
		}
		cout << max << endl;
		for(int i=0;i<v.size();i++){
			cout << v[i] <<" ";
		}
	}
}
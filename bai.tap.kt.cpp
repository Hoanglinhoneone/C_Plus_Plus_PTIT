#include<bits/stdc++.h>
int search(int a[][105],int m,int n,int x){
	int sum=0;
	for(int i=1;i<m;i++){
		int count =0;
		for(int j=0;j<n;j++){
			if(a[i][j]==x) count ++;
		}
		if(count != 0) sum++;
	}
	if(sum==m-1) return 1;
	else return 0;
}

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		vector<int> v;
		cin >> m >> n;
		int a[105][105];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		set<int> mp;
		for(int i=0;i<n;i++){
			mp.insert(a[0][i]);
		}
		for(auto t:mp){
			if(search(a,m,n,t)) v.push_back(t);
		}
		for(int i=0;i<v.size();i++)
		cout << v[i] <<" ";
		cout << endl;
	}
	return 0;
}
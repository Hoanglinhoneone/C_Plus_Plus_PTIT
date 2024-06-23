#include<bits/stdc++.h>

using namespace std;
int check(int a[][105], int n, int kt){
	int dem=0;
	for(int i=0;i<n;i++){
		int ok=0;
		for(int j=0;j<n;j++){
			if(a[i][j]==kt){
			    ok=1;
		    }
		}
		if(ok==1){
			dem++;
    	}
	}
	if(dem == n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[105][105];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
			cin >> a[i][j];
		}
		set<int> se;
		for(int i=0;i<n;i++){
			se.insert(a[0][i]);
		}
		int cnt=0;
		for(auto kt:se){
			if(check(a, n, kt)){
				cnt++;
			}
		}
	cout << cnt << endl;
	}
}
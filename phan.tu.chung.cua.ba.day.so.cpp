#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n1,n2,n3;
		cin >> n1 >> n2 >> n3;
		long long a[n1],b[n2],c[n3];
		for(int i=0;i<n1;i++){
			cin >> a[i];
		} 
		for(int i=0;i<n2;i++){
			cin >> b[i];
		} 
		for(int i=0;i<n3;i++){
			cin >> c[i];
		}
		int i=0,j=0,k=0;
		vector<long long> v;
		while(i<n1 && j <n2 && k < n3){
			if(a[i]==b[j] && b[j] == c[k]){
			    v.push_back(a[i]);	
			    i++;
			    j++;
			    k++;
			}
			else if(a[i] < b[j]) i++;
			else if(b[j] < c[k]) j++;
			else k++;
		}
		if(v.size() ==0){
			cout << -1 << endl;
		}
		else {
			for(int i=0;i<v.size();i++){
				cout << v[i] <<" ";
			}
			cout << endl;
		}
	}
	return 0;
}
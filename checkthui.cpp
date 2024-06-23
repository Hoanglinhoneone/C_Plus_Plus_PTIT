#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream in_put("Input.txt");
	ofstream out_put("Output.txt");
	string s;
	long long m,n;
	int a[105][105];
	int k=0;
	while(in_put >> s){
		if(k==0){
			m=stoll(s);
		}
		if(k==1){
			n==stoll(s);
		}
		if(k>1){
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++){
					a[i][j]=stoll(s);
				}
			}
		}
		k++;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
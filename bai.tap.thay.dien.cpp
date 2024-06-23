#include<bits/stdc++.h>

using namespace std;
bool sx(int a,int b){
	return a > b;
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		for(int i=0;i<s.size();i++){
			if(s[i] >= '0' && s[i] <= '9'){
				cout << s[i];
			}
		}
		cout << endl;
		int l=s.size();
		int a[l]={-1};
		int dem=0;
		for(int i=0;i<s.size();i++){
			if((s[i] >= '0' && s[i] <= '9') && (s[i-1] < '0' ||  s[i-1] > '9')){
			    int k=s[i]-'0';
		    	int j=i+1;
			    while(s[j] >= '0' && s[j] <= '9'){
				   k=k*10+(s[j]-'0');
				   j++;
			    }
			    a[dem++]=k;
	    	}
		}
		sort(a,a+dem,sx);
		for(int i=0;i<dem;i++){
			cout << a[i] <<" ";

		}
	}
}
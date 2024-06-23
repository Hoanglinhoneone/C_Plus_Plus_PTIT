#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
	int sum=0;
	for(int i=0;i<n;i++){
		if(a[i] > 0){
			sum+=a[i];
		}
	}
	cout << sum <<endl;
	
	sort(a,a+n);
	
	for(int i=0;i<n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
	int x,k;cin >> x >> k;
	for(int i=k;i<n;i++){
		a[i+1]=a[i];
	}
	a[k]=x;
	n++;
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	string s="";
	for(int i=0;i<n;i++){
		string pt=to_string(a[i]);
		s+=pt;
	}
	string kt=to_string(x);
	for(int i=0;i<s.size();i++){
		if(i%2==0){
			if((s[i]-'0') > 0){
			    s.insert(i,"kt");
		    }
		}
	}
	for(int i=0;i<s.size();i++){
		cout << s[i] << " ";
	}
	cout << endl;
	
	s.erase(k);
	
	for(int i=0;i<s.size();i++){
		cout << s[i] << " ";
	}
	cout << endl;
	for(int i=0;i<s.size();i++){
		if(s[i]=='5'){
			s.erase(i);
		}
		if(s[i] ==  s[i+1]) {
			s.erase(i);
		}
	}
	for(int i=0;i<s.size();i++){
		cout << s[i] << " ";
	}
	cout << endl;
}
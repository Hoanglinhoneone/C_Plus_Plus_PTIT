#include<bits/stdc++.h>

using namespace std; 

void in(int n, int a[]){ 
    for(int i=1;i<=n;i++) 
	    cout<<a[i]<<" "; 
		cout<<endl; 
	} 
void sinh(int &k, int n, int a[]) { 
    k=n; 
	while(k>=1 && a[k]>a[k-1]) k--; 
	swap(a[k-1],a[k]); 
	reverse(a+k,a+n); 
in(n,a);
} 
int main() { 
int t; 
cin>>t; 
while(t--) { 
    int n;
	cin>>n; 
	int a[n+2]; 
	int k; 
	for(int i=1;i<=n;i++) cin>>a[i]; 
	sinh(k,n,a); 
} 
}
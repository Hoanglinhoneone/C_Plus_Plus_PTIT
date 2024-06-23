#include<bits/stdc++.h>

using namespace std;
void sxchon(int a[], int n){
	int count = 0;
	for(int i=0;i<n-1;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
	    if(a[min] < a[i]){
	    	swap(a[min], a[i]);
			count++;
		}
	}
	cout << count << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sxchon(a,n);
		
	}
}
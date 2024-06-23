#include<bits/stdc++.h>

using namespace std;
int check1(int n, int a[100000] ){
	for(int i=0;i<n;i++){
		if(a[i]==1){
			return 0;
		}
	}
	return 1;
}
void check(int n,int a[100000]){
	int dem1=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]-a[i+1] == -1){
			dem1++;
		}
	}
	    if(dem1==n-1 && check1(n,a) == 0 ){
		    cout << a[n-1] + 1 << endl;
        }
}
int check111(int n,int a[100000]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==1){
			dem++;
		}
	}
	if(dem==n){
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
		int a[n];
		
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		
		sort(a,a+n);
		
		int min=a[n-1];
			
		check(n,a);
		
		if(check1(n,a)){
			cout << 1 << endl;
		}
		int x;
		for(int i =0;i<n-1;i++ ){
			if(a[i] > 0 && a[i] <= min){
				min = a[i];
				x=min;
			if(min + 1 != a[i+1]){
				if(check1(n,a)==0 && check111(n,a) == 0){
				cout << min + 1 << endl;
				break;
			    }
			}
			else {
				min++;
			}
		}
	}
	if(min == a[n-1]){
		cout << min + 1 << endl;
	}
	/*if(min ==1 ){
		cout << 2 << endl;
	}*/
		
	}
	return 0;
}
/*check111(n,a) == 1 */

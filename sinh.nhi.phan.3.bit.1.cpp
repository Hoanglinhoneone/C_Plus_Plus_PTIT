#include<bits/stdc++.h>

using namespace std;

int n,k,a[100],chc;
int ktsum(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			cnt+=a[i];
		}
	}
	if(cnt==k){
		for(int i=1;i<=n;i++){
			if(a[i]==1){
				int x=i;
				int dem=1;
				while(k--){
					if(a[++x]==1){
						dem++;
					}
				}
				if(dem == k){
					return 1;
				}
			}
		}
	}
	return 0;
}
void khoitao(){
	for(int i=1;i<=n;i++){
		a[i]=0;// cau hinh dau tien full 0;
	}
}
void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		chc=0;
	}
	else {
		a[i]=1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		chc=1;
		khoitao();
		while(chc){
			if(ktsum()==1){
			    for(int i=1;i<=n;i++){
				    cout << a[i];
			    }
			    cout << " ";
			}
			sinh();
		}
		cout << endl;
	}
}
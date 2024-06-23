#include<bits/stdc++.h>

using namespace std;

using ll = long long;

void merge(int a[], int l, int m, int r){
	vector<int> trai(a+l, a + m + 1);
	vector<int> phai(a + m + 1, a + r + 1 );
	int i=0, j=0;
	while(i< trai.size() && j < phai.size()){
		if(trai[i] <= phai[j]){
			a[l] = trai[i];
			l++, i++;
		}
		else {
			a[l] = phai[j];
			l++, j++;
		}
	}
	while(i < trai.size()){
	    a[l] = trai[i];
	    l++, i++;
	}
	while(j<phai.size()){
		a[l] = phai[j];
		l++, j++;
	}
}
void mergeSort(int a[], int l, int r){
	if(l >= r) return;
	int m = (l+r)/2;
	mergeSort(a, l, m);
	mergeSort(a, m+1, r);
	merge(a, l , m , r);
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	mergeSort(a, 0, n-1);
	for(auto it:a){
		cout << it << " ";
	}
}
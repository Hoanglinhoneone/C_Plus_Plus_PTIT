#include<bits/stdc++.h>

using namespace std;
int merge(int a[], int l,int m, int r){
	vector<int> trai(a+l, a+m+1);
	vector<int > phai(a+m+1, a+r+1);
	int i =0, j =0, cnt = 0;
	while(i<trai.size() && j < phai.size()){
		if(trai[i] <= phai[j]){
			a[l] = trai[i];
			i++,l++;
		}
		else {
			cnt += trai.size()-i;
			a[l] = phai[j];
			j++,l++;
		}
	}
	while(i<trai.size()){
		a[l] = trai[i];
		l++,i++;
	}
	while(j<phai.size()){
		a[l] = phai[j];
		l++,j++;
	}
	return cnt;
}
int merge_sort(int a[], int l, int r){
	int dem = 0;
	if(l < r){
	    int m = (l+r)/2;
	    dem += merge_sort(a, l, m);
	    dem += merge_sort(a, m+1, r);
	    dem += merge(a, l , m, r);
	}
    return dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &i:a) cin >> i;
        cout << merge_sort(a, 0, n-1) << endl;
	}
}
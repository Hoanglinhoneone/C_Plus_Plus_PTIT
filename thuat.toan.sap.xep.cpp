#include<bits/stdc++.h>

using namespace std;

void sxchon(int a[], int n){// tìm vị trí nhỏ nhất nhỏ hơn a[i] sau vị trí i rồi swap với a[i];O(n^2);
	for(int i=0;i<n-1;i++){
		int min=i;// luu vị trí nhỏ nhất
		for(int j=i+1;j<n;j++){
			if(a[j] < a[min]){// tìm vị trí nhỏ nhất nhỏ hơn a[i];
				min=j;//lưu vị trí nhỏ nhất nhỏ hơn a[i];
			}
		}
		swap(a[i],a[min]);//đổi chỗ a[i] với vị trí nhỏ nhất nhỏ hơn a[i]. 
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void sxnoibot(int a[], int n){// đổi chỗ vị trí a[j] với a[j+1] > a[j];
    for(int i=0;i<n-1;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(a[j] > a[j+1]){
    			swap(a[i],a[j+1]);
			}
		}
	}	
}
void sxchen(int a[], int n){// O(n^2)
	for(int i=1;i<n;i++){
		// lấy phần tử ở chỉ số i.
		int x=a[i],pos = i-1;
		while(pos >= 0 && x < a[pos]){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
}
void countingsort(int a[], int n){// các phần tử trong mảng nằm trong khoảng từ 0 đến 10^7;
	int cnt[1000000]={0};
	int m=INT_MIN;
	for(int i=0;i<n;i++){
		cin >> a[i];
		cnt[a[i]]++;
		m=max(m,a[i]);
	}
	for(int i=0;i<=m;i++){
		if(cnt[i] != 0){
			for(int j=0;j<cnt[i];j++){
				cout << i << " ";
			}
		}
	}
}
void sxtron(int a[], int n){
	
}
void Heapsort() // sắp xếp vun đống.
int main(){
	int n;cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sxchen(a,n);
}
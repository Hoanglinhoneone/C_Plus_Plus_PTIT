#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		char kt[15];
		double diem=10;
		int n;
		cin >> n;
		for(int i=0;i<15;i++){
			cin >> kt[i];
		}
		for(int i=0;i<15;i++){
			if(n==101){
				if(kt[i] != a[i]){
					diem=diem-(double)10/15;
				}
			}
			else if(n==102){
				if(kt[i] != b[i]){
					diem-=(double)10/15;
				}
			}
		}
		cout << setprecision(2) << fixed << diem << endl;	
		}
	}

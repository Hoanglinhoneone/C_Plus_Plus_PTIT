#include<bits/stdc++.h>

using namespace std;

int main(){
		int t;
		cin >> t;
		while(t--){
			int n;cin >> n;
			set<int> se;
			for(int i=0;i<n;i++){
				int x;
				cin >> x;
				se.insert(x);
			}
			//cout << se.size() << endl;
			int x;
			cin >> x;
			for(int i=0;i<x;i++){
				int value;
				cin >> value;
				if(se.count(value) != 0){
					cout << "YES" << endl;
				}
				else {
					cout << "NO" << endl;
				}
			}
			
    	}
	return 0;
	
}
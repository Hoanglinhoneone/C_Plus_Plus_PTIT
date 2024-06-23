#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int d=0;
		int khong=0,mot=0,hai=0,ba=0,bon=0,nam=0,sau=0,bay=0,tam=0,chin=0;
		for(int i =0;i<s.size();i++){
			if(s[0]=='0' || s[i] < '0' || s[i] > '9'){
			    cout << "INVALID" << endl;
			    d=1;
			    break;
		    }
			if(s[i]-'0'== 0){
				khong++;
			}
			else if(s[i]-'0'== 1){
				mot++;
			}
			else if(s[i]-'0'== 2){
				hai++;
			}
			else if(s[i]-'0'== 3){
				ba++;
			}
			else if(s[i]-'0'== 4){
				bon++;
			}
			else if(s[i]-'0'== 5){
				nam++;
			}
			else if(s[i]-'0'== 6){
				sau++;
			}
			else if(s[i]-'0'== 7){
				bay++;
			}
			else if(s[i]-'0'== 8){
				tam++;
			}
			else if(s[i]-'0'== 9){
				chin++;
			}
		}
		if(d==0){
		if(khong == 0 || mot ==0 || hai == 0 || ba ==0 || bon ==0 || nam==0 || sau==0 || bay==0 || tam ==0 || chin ==0){
			cout << "NO" << endl;
		}
		else {
			cout <<"YES" << endl;
		}
		}	
	}
}

	#include<iostream>
	#include<math.h>
	
	using namespace std;
	long long s[10001];
	void sang(){
		s[0]=s[1]=0;
		for(int i=2;i<=10000;i++){
			s[i]=1;
		}
		for(int i=0;i<=100;i++){
			if(s[i]==1){
				for(long long j=i*i;j<=10000;j+=i){
					s[j]=0;
			    }
		    }
	   }
	}
	
	int main(){
		int t;
		cin >> t;
		sang();
		while(t--){
			long long n;
			cin >> n;
			int check =0;
			for(int i=2;i<=n/2;i++){
				if(s[i] ==1 && s[n-i]==1){
					cout << i << " " << n-i << endl;
					break;
				}
			}
			if(check ==0){
				cout << -1 << endl;
			}
		}
		return 0;
	}

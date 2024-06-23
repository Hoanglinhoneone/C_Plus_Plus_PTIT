#include<bits/stdc++.h>

using namespace std;

long long min(string a,string b){
	for(int i=0;i<a.length();i++){
		   if(a[i]=='6'){
			a[i]='5';
		   }
	    }
	    for(int i=0;i<b.length();i++){
		    if(b[i]=='6'){
			    b[i]='5';
		    }
	    }
	    
	    long long n1 = stoll(a);
	    long long n2 = stoll(b);
	    
	    return n1+n2;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		
		string a;
		string b;
		
		cin >> a >> b;
		
	    cout << min(a,b) << " ";
	    
	    for(int i=0;i<a.length();i++){
		    if(a[i]=='5'){
			    a[i]='6';
		    }
	    }
	    for(int i=0;i<b.length();i++){
		    if(b[i]=='5'){
			    b[i]='6';
		    }
	    }
	    
	    long long n3=stoll(a);
	    long long n4=stoll(b);
	    
	    cout <<  n3+n4 << endl;  
    }	
}

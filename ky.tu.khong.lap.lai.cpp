#include<bits/stdc++.h>

using namespace std;
void xoa(char s[], int vt){
	int n=strlen(s);
	for(int i=vt+1;i<n;i++){
		s[i-1]=s[i];
	}
	s[n-1]='\0';
}
void xoa_trung(char s[]){
	for(int i=0;i<strlen(s);i++){
		bool kt=false;
			for(int j=i+1;j<strlen(s);j++){
				if(s[i]==s[j]){
					xoa(s,j);
					j--; // tranh truong hop 2 ky tu lien nhau.
					kt=true;
				}	
			}
			if(kt == true){
				xoa(s,i);
				i--;
			}
		}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		char s[10000];
		cin >> s;
        xoa_trung(s);
		cout << s << endl;
	}
}

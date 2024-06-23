#include<bits/stdc++.h>
using namespace std;
class MonThi{
	private:
		string ma, ten, ht;
	public:
		friend istream &operator >> (istream &in, MonThi &a){
			getline(in, a.ma);
			getline(in, a.ten);
			getline(in, a.ht);
			return in;
		}
		friend ostream &operator << (ostream &out, MonThi a){
			out << a.ma << " " << a.ten << " " << a.ht << endl;
			return out;
		}
		string getma(){
			return this->ma;
		}
};
bool sx(MonThi a, MonThi b){
	return a.getma()  < b.getma();
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	MonThi a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n, sx);
	for(int i=0;i<n;i++){
		cout << a[i];
	}
}
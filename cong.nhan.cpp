#include<bits/stdc++.h>
/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/
using namespace std;
class CongNhan{
	private :
		string mcn, name,gt, ns, dc, mst, nk;
		int n,t,nam;
	static int x;
	public:
		friend istream &operator >> (istream &in, CongNhan &a){
			a.mcn = string(5-to_string(a.x).size(), '0') + to_string(a.x);
			a.x++;
			cin.ignore();
			getline(in, a.name);
			in >> a.gt >> a.ns;
			a.t=(a.ns[0]-'0')*10+a.ns[1];
			a.n=(a.ns[3]-'0')*10+a.ns[4];
			a.nam= a.n=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
			cin.ignore();
			getline(in, a.dc);
			in >> a.mst >> a.nk;
			return in;
		}
		friend ostream &operator << (ostream &out, CongNhan a){
			out << a.mcn << " " << a.name << " "<< a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nk << endl;
			return out;
		}
		int getN(){
			return n;
		}
		int getT(){
			return t;
		}
		int getNam(){
			return nam;
		}
};
int CongNhan::x=1;
bool sx(CongNhan a, CongNhan b){
	if(a.getNam() == b.getNam()){
		if(a.getT() == b.getT() ){
			return a.getN() < b.getN();
		
		}
		return a.getT() < b.getT();
	}
	return a.getN() < b.getN();
}
void sapxep(CongNhan a[], int n){
	sort(a, a+n, sx);
}
int main(){
	CongNhan ds[50];
	int N,i;
	cin >> N;
	for(int i=0;i<N;i++) cin >> ds[i];
	sapxep(ds, N);
	for(int i=0;i<N;i++) cout << ds[i];
	return 0;
}
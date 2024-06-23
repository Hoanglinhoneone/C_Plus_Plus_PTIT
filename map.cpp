 #include<bits/stdc++.h>

using namespace std;

int main(){
	// *** map;// các phần tử trong map không trùng nhau và được sắp xếp theo thứ tự tăng theo key
    //	khai báo:
    //map< key, value> name;vd:
    // name.first // lấy phần tử key;
    //name.second // lấy phần tử second;
    //name.count(i) // lấy số lần xuất hiện của phần tử i trong (key) map;
    // name.find(i) // trả về vị trí xuất hiện của phần tử i trong (key) map;
    // name.end()// vị trí đứng sau vị trí cuối cùng của map;
    //name.erase(i) // xóa phần tử i trong map;
    map<int, int> mp;
    mp[100]=200; //(100,200);
    mp[200]=300; //(100.200);
    mp.insert({400,500});
    cout << mp.size()<< endl;// số lượng phần tử trong map;
	for(pair<int, int> x : mp){
		cout << x.first << " " << x.second << endl;// in phần tử trong map;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;// in phần tử trong map;
	}
	// vd:
	int n;
	cin >>n ;
	for(int i=0;i<n;i++){
		int x;cin >> x;
		mp[x]++;
	}
	for(auto x : mp){
		cout << x.first << " " << x.second << endl; 
	}
	
	// *****  multimap<key, value> name;// được lưu nhiều giá trị giống nhau, sắp xếp tăng dần;
	multimap<int, int> mtp;
	// hàm giosnong ở trên;
	
	// ***** unordered_map<key, value> name // không lưu giá trị đã trùng, không sắp xếp;
	unordered_map<int, int>udm;
	// hàm giống ở trên;
}
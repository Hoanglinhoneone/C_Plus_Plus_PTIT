#include<bits/stdc++.h>

/* Ghi dữ liệu vào một tệp nhị phân :

-Mở tệp tin theo chế độ để ghi nhị phân:
 fstream <Tên biến tệp>(<Tên tệp tin>, ios::out|ios::binary);

-/Ghi dữ liệu vào tệp bằng thao tác “write()”:
<Tên biến tệp>.write(char* <Dữ liệu>,int <Kích thước dữ liệu>);

-Đóng tệp tin bằng lệnh close():
<Tên biến tệp>.close();
*/
using namespace std;
const int length = 25;

int main(){
	// ghi vào tệp tin theo chế độ nhị phân:
//	char c;
//	int c;
 // string c;
     int c[5]={2,4,5,7,8};
//	cin >> c;
 //   getline(cin, c);
	fstream f("a.linh", ios::in | ios:: binary);
//	f.write(&c, sizeof(c));
  //  f.write(reinterpret_cast<char *>(&c),sizeof(c));
    f.write(reinterpret_cast<char *>(c),sizeof(c));
	f.close();
	
	// đọc dữ liệu tệp tin ở chế độ nhị phân.
	f.open("a.linh",ios::in|ios::binary);
//	f.read(&c,sizeof(c));
  //  f.read(reinterpret_cast<char *>(&c),sizeof(c));
    f.read(reinterpret_cast<char *>(c),sizeof(c)); // đối với mảng thì k cần để &c.
	cout << "Du lieu doc duoc la : " <<endl;
	for(int i=0;i<5;i++){
		cout << " " << c[i];
	}
	f.close();
}
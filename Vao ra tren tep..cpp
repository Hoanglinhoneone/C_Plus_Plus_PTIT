#include<bits/stdc++.h>

using namesapce std;

int main(){

/*
   Khai niem ve tep:
   - Mở tệp.
   + thực hiện thao tác đọc, ghi trên tệp đang mở.
   - Đóng tệp.
*/

// Khai bao bien tep:
    // fstream <tên biến tệp> ( tên tệp, chế độ mở tệp ) 
    fstream MyFile("Hoanglinh.txt", ios::in);
    
    // Các chế độ mở tệp tin :
/*    ios::in :Mở tệp tin để đọc.
      ios::out : Mở tệp tin có sẵn để ghi.
	  ios::app : Mở tệp tin có sẵn để thêm vào cuối tệp.
	  ios::binary : Mở tệp tin ở chế độ nhị phân.
	  ios::text : Mở tệp tin  ở chế độ văn bản.
	  
	  # Nếu muốn mở tệp tin đồng thời nhiều chức năng thì thêm dấu "|" .
	  vd: fstream MyFile("Hoanglinh.txt", ios::in|ios::out|ios::binary);
*/

// Vào Ra Trên Tệp :

// vào ra trên tệp bằng >> và << :
/*

    Ghi tệp văn bản bằng << :
   - các bước để ghi dữ liệu vào 1 tệp tin:
    + Mở tệp tin để chế độ ghi bằng đối tượng ofstream(Mở tệp chỉ để ghi).
     oftream MyFile("HoangLinh.txt", ios::out); 
	  
    + Ghi dữ liệu vào tệp bằng <<:
   	  <tên biến tệp> << <dữ liệu>;
   	+ Đóng tệp tin bằng lệnh close();:
   	 <tên biến tệp>.close();
   	 
   	 
   	Đọc dữ liệu văn bản bằng >> : 
   	- các bước để tiến hành đọc dữ liệu từ 1 văn bản :
   	+ Mở tệp tin theo chế độ độc bằng đối tượng ifstream(Mở tệp chỉ để đọc).
   	ifstream<tên biến>(<tên tệp tin>, ios::in);
   	+ ĐỌc dữ liệu tệp bằng thao tác:
   	<tên biến tệp> >> <Biến dữ liệu>;
   	+Đóng tệp bằng lệnh close().
   	
   	
//   	Vào ra tệp nhị phân bằng read và write :
   	Ghi vào tệp nhị phân bằng  write:
   	- Các bước để ghi dữ liệu vào mọt file nhị phân :
   	+ Mở tệp theo chế độ nhị phân bằng đối tượng fstream:
   	   fstream <tên biến tệp>(<tên tệp tin>, ios::binary);
    + Ghi dữ liệu vào tệp bằng thao tác "write()":
	<Ten bien tep>.write(char* <dữ liệu>, int <kiểu dữ liệu>);
	+ ĐÓng tệp bằng close. 
   	
*/ 
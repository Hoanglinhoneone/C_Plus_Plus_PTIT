    name.substr(vitri bat dau lay, so ky tu lay); // lay chuoi ky tu con.
    name.length() ; name.size();// lay do dai chuoi
 	string Linh;// khai bao
 	cin.ignore();// bo phim enter
 	getline(cin,linh);// nhap lay dau cach dung ham:
 	cin >> Linh;
 	cout << Linh.substr(2,2)<<" " << Linh.length()<< " " << Linh.at(2) << endl ;
 	cout << Linh.append(".com");// them chuoi con vao cuoi chuoi.
    a.compare(b);// a>b tra ve 1,a<b:-1,a=b:0; 
    int n = stoi(name); //chuyen doi xau so thanh 1 so nguyen kieu int
    long long n = stoll(name);//chuyen doi xau so thanh 1 so nguyen kieu long long
    string s = to_string(n); // chuyen doi so nguyen thanh xau ky tu;
    s.erase(n,k)// xoa k phan tu ke tu vitri n;
    s.insert(n,s1) // chen s1 vao s tu vi tri thu n;
    s.replace(n,k,s1) // thay the k ky tu trong s ke tu vi tri thu n bang s1;
    s.find(s1)//tra lai vi tri xuat hien dau tien cua s1 trong s;
    s.rfind(s1) // tra lai vi tri xuat hien cuoi cung cua s1 trong s;
    s.at(int i) // truy cap den phan tu thu i trong string.
    str.pop_back();//xoa ky tu cuoi cung
	str.erase(p); // xoa ky tu tai vi tri chi dinh.
	str.find(kytu,vi tri bat dau tim) // neu k dien vi tri tim thi mac dinh tim tu dau.
	stringstream ss(s);// tach tung tu theo dau cach trong xau 
	string t;          // khai bao xau moi
	while(ss >> t){    //gan tu vao xau moi
		...
	}
	while(getline(ss,t,'.')){// tach tung tu theo dau cham cach trong xau 
		...
	}
	// chuyen xau tu hoa sang thuong:
	for(int i=0;i<n;i++){
		name[i]=tolower(name[i]);
	}
	// chuyen xau tu thuong sang hoa:
	for(int i=0;i<n;i++){
		name[i]=toupper(name[i]);
	}
	// kieu du lieu char:
	// ham:
    strcpy(s1,s2)// copy sau 1 vao 2;
    strcmp(s1,s2)//so sanh 2 chuoi;

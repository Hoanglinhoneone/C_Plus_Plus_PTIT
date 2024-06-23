#include<bits/stdc++.h>
// kế thừa trong oop(C++).	

using namespace std;

// Base class : class cha.
// derived class: class con.
class Person{
	private:
		string name;
		string address;
	public:
//		string getName(){
//			return name;
//		}
//		string getAdddress(){
//			return address;
//		}
//		void setName( string name){
//			this->name= name;
//		}
//		void setAddress(string address){
//			this->address= address;
//		}
		void nhap(){
			getline(cin, name);
			getline(cin, address);
		}
		void in(){
			cout << name << " " << address;
		}
};
class Student : public Person{
	private:
		float gpa;
	public:
//		float getGpa(){
//			return gpa;
//		}
//		void setGpa(float gpa){
//			this->gpa=gpa;
//		}
//		void in(){
//			cout << getName() << " " << getAddress() << " " << fixed << setprecison(2) << gpa <<  endl;
//		}
		// funcion overriding : ghi  đè :
		void nhap(){
			Person::nhap();
				cin >> gpa;
		} 
		// funcion overriding : ghi  đè :
		void in(){
			Person::in();
			cout << gpa; 
		}
};
class Lecturer: public Person{
	private:
		double salary;
	public:
		getSalary(){
			return salary;
		}	
}; 
int main(){
	Person a;
	a.nhap();
	a.in();
}
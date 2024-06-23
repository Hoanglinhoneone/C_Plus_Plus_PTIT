#include<bits/stdc++.h>

using namespace std;

int main(){
	string ip;
	ifstream input_file{"PTIT.in"};
	ofstream output_file{"PTIT.out"};
	while(input_file >> ip){
		output_file << ip << endl;
	}
	input_file.close();
	output_file.close();
	return 0;
}
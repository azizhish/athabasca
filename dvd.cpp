#include "dvd.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

dvd::dvd(int s_num, string mov_title, bool avail){
	serial_number = s_num;
	title = mov_title;
	available = avail;
}

dvd::dvd(){

}

void dvd::print(){
	string availability;
	if (available == true){
		availability = "Yes";
	}
	else {
		availability = "No";
	}
	cout << "[Serial Number:] "  << serial_number 
	<<  " [Movie Title:] " << title << " [Available:] "
	<< availability << endl;
}

int main(int argc, char const *argv[])
{
	string str = "123 Seven true";
	string delimit = " ";
	string token = str.substr(0, str.find(delimit));
	cout << token << endl;
	//dvd shop_list[3] = {{23, "Hellboy", true}, {22, "goldeneye", true}, {24, "fargo", false}};
	dvd list[1];
	// list[0].print();
	// ifstream in("readlines.txt"); //File stream to read from the input file
	// string line;
	// while (getline(in, line)){
	// 	;
	// }
	int pos = 0;
	while ((pos = str.find(delimit)) != string::npos) {
	    token = str.substr(0, pos);
	    cout << token << endl;
	    str.erase(0, pos + 1);
	}
	cout << str << endl;


	return 0;
}


// std::string s = "scott>=tiger>=mushroom";
// std::string delimiter = ">=";

// size_t pos = 0;
// std::string token;
// while ((pos = s.find(delimiter)) != std::string::npos) {
//     token = s.substr(0, pos);
//     std::cout << token << std::endl;
//     s.erase(0, pos + delimiter.length());
// }
// std::cout << s << std::endl;









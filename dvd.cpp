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
	dvd shop_list[3] = {{23, "Hellboy", true}, {22, "goldeneye", true}, {24, "fargo", false}};
	shop_list[0].print();
	return 0;
}

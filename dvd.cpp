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
	serial_number = 0;
	title = "";
	available = false;
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

void dvd::set_attributes(string num, string name, string avail){
	serial_number = stoi(num);
	title = name;
	if (avail =="true") 
		available = true;
}

void dvd::parse_set(string line, const int line_number){
	int count = 0, pos = 0;
	string delimit = "*";
	string token, ser, name, avail = "";
	while ((pos = line.find(delimit)) != string::npos) {
	   	token = line.substr(0, pos);
	   	switch (count){
	   		case 0:
	   			ser = token;
	   			break;
	   		case 1:
	   			name = token;
	   			break;
	   		case 2:
	   			avail = token;
				set_attributes(ser, name, avail);
				cout << "Too many arguments in line " << line_number + 1 
				<< " of input file" << endl;
	   			return;
	   	}
	   	// cout << token << endl;
	   	line.erase(0, pos + 1);
	   	count++;
	}
	avail = line;
	set_attributes(ser, name, avail);
}

int main(int argc, char const *argv[])
{
	dvd list[10];
	ifstream in("readdvd.txt");
	dvd test;
	string line, token;	
	int pos = 0, index = 0;
	while (getline(in,line) && index < 10){
		list[index].parse_set(line, index);
		index++;
	}
	for (int i = 0; i < index; i++){
		list[i].print();
	}
	return 0;
}






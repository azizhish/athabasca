// DVD.h
// Definition file for the DVD Class
#include <string>
using namespace std;
#ifndef DVD_H
#define DVD_H

class dvd{
	int serial_number;
	string title;
	bool available;
	void set_attributes(string num, string name, string avail);
 public:
	dvd(int serial_number, string title, bool available);
	dvd();
	void print();
	void parse_set(string line, const int line_number);
};
#endif // DVD_H ///:~


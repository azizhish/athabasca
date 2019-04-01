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
 public:
	dvd(int serial_number, string title, bool available);
	dvd();
	void print();
};
#endif // DVD_H ///:~


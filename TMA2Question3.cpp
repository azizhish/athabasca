//: TMA2Question3.cpp

/*
 Title: TMA2Question3.cpp
 Description: Class to read a file and store in string
 Date: April 06, 2019
 Author: Hisham Aziz
 Version: 1.0
*/

/* 
 DOCUMENTATION
 
 Program Purpose:
 	To define a class Text with multiple constructors (1) With no argument, the 
 	default constructor (2) One String argument, filename/filepath. The Text
 	Object will read from this file upon initialization and store the text from
 	this file in a private member variable
 	Public Function: void contents(): prints to standard output the contents of
 	member variable i.e. the contents of the filename passed via Constructor 2

 Main Method is used to test the functionality of this program 

 Compile (assuming Cygwin is running): g++ -o TMA2Question3 TMA2Question3.cpp
 Execution (assuming Cygwin is running): ./TMA2Question3
 
 Notes: in Cygwin, main must return type int
 
 Classes: Text Class

 Variables:
 	text: instance of the Text Class
*/

/*
 TEST PLAN
 
 Normal case:
 	The contents of the filename pass via constructor 2 are printed to standard out

 File does not exist:
 	Nothing is printed to the standard output

 Empty Data: 
 	Nothing is printed to the standard output

 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


/*
Class declaration and function implementation for Text Class
 */
class Text{
	string words;
public:
	Text(){}
	Text(string filename){
		string line;
		ifstream in(filename);
		while (getline(in, line)){
			words = words + line + "\n";
		}
	}
	void contents(){
		if(words != ""){
			cout << words << endl;
		}
	}
};

/*
	The main method. Used here to test the functionality of the Text Class
 */

int main(int argc, char const *argv[])
{
	Text* text = new Text("q3.txt");
	text->contents();
	return 0;
}

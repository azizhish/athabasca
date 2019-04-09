//: TMA2Question2.cpp

/*
 Title: TMA1Question2.cpp
 Description: User Prompted I/O with files 
 Date: December 20, 2018
 Author: Hisham Aziz
 Version: 1.0
*/

/* 
 DOCUMENTATION
 
 Program Purpose:
 	To Define Nested Classes: Egg Class is nested within the Nest Class
 	which is in turn nested within the Hen Class. Subsequently all classes are
 	are created, called to display content and then destroyed in the main using 
 	delete(). 

 Compile (assuming Cygwin is running): g++ -o TMA2Question2 TMA2Question2.cpp
 Execution (assuming Cygwin is running): ./TMA2Question2
 
 Notes: in Cygwin, main must return type int
 
 Classes: Hen, Nest (nested within Hen), Egg(nested within Nest)

 Variables:
 	hen: instance of the Hen Class
 	nest: instance of the Nest Class
	egg: instance of the Egg Class
*/

/*
 TEST PLAN
 
 Normal case:
 	Each class prints its unique messages to standard output

 Multiple instances of the same class:
 	Operated as expected

 Bad Data: Not Applicable as no external Data is being 
 read or user action required
 	
 */

#include <iostream>
using namespace std;

class Hen{
public:
	class Nest{
	public:
		class Egg{
		public:
			Egg();
			~Egg();
			void display();
		};
		//Nest Function Declarations
		Nest();
		~Nest();
		void display();
	};
	//Hen Function Declarations
	Hen();
	~Hen();	
	void display();
};

// THe Hen functions implementations

Hen::Hen(){
	cout << "Hen being created" << endl;
}

void Hen::display(){
	cout << "Hen being displayed" << endl;	
}

Hen::~Hen(){
	cout << "Hen being destroyed" << endl;
}

// The Nest function implementations

Hen::Nest::Nest(){
	cout << "Nest being created" << endl;
}

void Hen::Nest::display(){
	cout << "Nest being displayed" << endl;	
}

Hen::Nest::~Nest(){
	cout << "Nest being destroyed" << endl;
}

// The Egg class function implementations

Hen::Nest::Egg::Egg(){
	cout << "Egg being created" << endl;
}

void Hen::Nest::Egg::	display(){
	cout << "Egg being displayed" << endl;	
}

Hen::Nest::Egg::~Egg(){
	cout << "Egg being destroyed" << endl;
}


int main(int argc, char const *argv[])
{
	Hen* hen = new Hen();
	hen->display();
	delete hen;

	Hen::Nest* nest = new Hen::Nest();
	nest->display();
	delete nest;
	
	Hen::Nest::Egg* egg = new Hen::Nest::Egg();
	egg->display();
	delete egg;

	return 0;
}
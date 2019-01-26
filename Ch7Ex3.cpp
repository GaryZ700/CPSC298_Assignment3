/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 1, Ch7 Ex3
Program to simulate Mom's old red clicker.*/

#include "Menu.h"
#include "Counter.h"
using namespace std;

//declare all global variables here
Counter counter(9999);
string message = "";

//declare all function prototypes here
bool logic(string option);

/////////////////////////////////////////////////////////////////////

int main(){

	bool loop = true;
	Menu menu;

	//set up text menu with options
	menu.addText("			Momma's Little Red Clicker (TM)\n\n");

	menu.addOption("a. Add cents.", "a");
	menu.addOption("s. Add dimes.", "s");
	menu.addOption("d. Add dollars", "d");
	menu.addOption("f. Tens of dollars.", "f");
	menu.addOption("o. Check Overflow", "o");
	menu.addOption("q. Quit", "q");

	//main while loop for the program
	do{
	
		menu.display();
		cout << "\nThe counter is at " << counter.getCount() << endl << message;
		message = "";
		loop = logic(menu.parseOption());		
	
	}while(loop);

}

/////////////////////////////////////////////////////////////////////

//logic function 
//returns a bool to represent whether program should end or not
//option, string representing the option the user choose
bool logic(string option){

	Menu menu;
	
	//all logic for options menu occurs here
	if(option == "a"){
		int amt = menu.parseNumber("How many cents would you like to add?\n", "Please enter a number between 1 and 9 only.\n", 1, 9);
		for(int i=0; i<amt; i++)
			counter.incr1();
	}
	else if(option == "s"){
		int amt = menu.parseNumber("How many dimes would you like to add?\n", "Please enter a number between 1 and 9 only.\n", 1, 9);
		for(int i=0; i<amt; i++)
			counter.incr10();
	
	}
	else if(option == "d"){
		int amt = menu.parseNumber("How many dollars would you like to add?\n", "Please enter a number between 1 and 9 only.\n", 1, 9);
		for(int i=0; i<amt; i++)
			counter.incr100();
	
	}
	else if(option == "f"){	
		int amt = menu.parseNumber("How many tens of dollars would you like to add?\n", "Please enter a number between 1 and 9 only.\n", 1, 9);
		for(int i=0; i<amt; i++)
			counter.incr1000();
	}
	else if(option == "o"){
		if(counter.overflow()){
			message = "Your counter has definitly overflowed.\n";
			return true;
		}
		else 
			message = "No overflow.\n";
	}
	else if(option == "q")
		return false;

	if(counter.overflow())
		message = "Counter has overflowed!";

	return true;

}


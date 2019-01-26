/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3, Ch6 Ex4
Allows for testing of the GasPump class.*/

#include "GasPump.h"
using namespace std;

//declare all function prototypes here

/////////////////////////////////////////////////////////////////////

int main(){

	GasPump gasPump;

	//main loop for the program
	do{	
		gasPump.display();
	}while(gasPump.selectOption());
}

/////////////////////////////////////////////////////////////////////

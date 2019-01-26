/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3, Ch6 Ex4
Allows for testing of the CounterType class.*/

#include "CounterType.h"
using namespace std;

//declare all function prototypes here

/////////////////////////////////////////////////////////////////////

int main(){

	CounterType counter;

	counter.setCount(-20);
	counter.setCount(10);

	cout << "\nThe counter is: " << counter.getCount() << endl;	

	counter.increment();
	counter.displayCount();

	for(int i=0; i<12; i++){
	
		counter.decrement();
	
	}

	counter.displayCount();
}

/////////////////////////////////////////////////////////////////////

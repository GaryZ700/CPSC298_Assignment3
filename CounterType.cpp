/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3
Implementation for the CounterType class.*/

#include "CounterType.h"

//setCount function 
//has a void return 
//counter, value to set m_counter to 
void CounterType::setCount(int counter){
	
	//check if counter is to be set to a negative value
	if(counter < 0)
		cout << "\nCounter can not be set to a negative value, please use setCount with a positive number!!\n";
	else
		m_counter = counter;
}

///////////////////////////////////////////////////////////////////

//getCount function
//returns int of counter value
int CounterType::getCount(){
	return m_counter;
}

///////////////////////////////////////////////////////////////////

//displayCount function
//has void return 
void CounterType::displayCount(){

	cout << "\nThe counter current value is: " << m_counter << endl;

}

///////////////////////////////////////////////////////////////////

//increment function 
//has void return
void CounterType::increment(){
	m_counter += 1;
}

///////////////////////////////////////////////////////////////////

//decrement function 
//has void return 
void CounterType::decrement(){

	if(m_counter-1 >= 0)
		m_counter -= 1;
	else
		cout << "\nCounter could not be decremented because doing so would yield a negative counter number.\n";

}

///////////////////////////////////////////////////////////////////

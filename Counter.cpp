/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3, Ch7 Ex3
Implementation for the Counter Class.*/

#include "Counter.h"

///////////////////////////////////////////////////////////////////

//constructor function for the counter class
//max, int of maximum number counter should achive
Counter::Counter(int max){
	m_max = max;
       	m_counter = 0;	
}

///////////////////////////////////////////////////////////////////

//reset function 
//has a void return
void Counter::reset(){
	m_counter = 0;
}

///////////////////////////////////////////////////////////////////

//incr1 function 
//has void return 
void Counter::incr1(){
	m_counter += 1;
}

///////////////////////////////////////////////////////////////////

//incr10 function 
//has a void return 
void Counter::incr10(){
	m_counter += 10;
}

////////////////////////////////////////////////////////////////////

//incr100 function 
//has a void return 
void Counter::incr100(){
	m_counter += 100;
}

///////////////////////////////////////////////////////////////////

//incr1000 function 
//has a void return 
void Counter::incr1000(){
	m_counter += 1000;
}

///////////////////////////////////////////////////////////////////

//overflow function 
//returns a bool representing whether or not the timer has gone past its maximum value
bool Counter::overflow(){
	
	if(m_counter > m_max)
		return true;
	else
		return false;
}

///////////////////////////////////////////////////////////////////

int Counter::getCount(){

	return m_counter;

}

/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3
Header file for the CounterType class.*/

#include <iostream>
using namespace std;

class CounterType{

	private:
		int m_counter;
	
	public:
		void setCount(int count);
		int getCount();
		void displayCount();
		void increment();
		void decrement();
};

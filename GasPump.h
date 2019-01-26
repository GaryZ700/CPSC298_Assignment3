/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3
Header file for the GasPump class.*/

#include "Menu.h"
#include <functional>
using namespace std;

class GasPump{

	private:
		Menu mainGasDisplay;
		const float costPerGallon=3.22;
		float charge=0.0;
		float gasDispensed=0.0;
	        void reset();
		void pump();
		void quit();
		bool exitStatus=false;
	
	public:
		void display();
		bool selectOption();
};

/*Gary Zeri
2321569
zeri@chapman.edu
CPSC298-01
Assignment 3
Implementation for the GasPump class.*/

#include "GasPump.h"

///////////////////////////////////////////////////////////////////

//display function  
//has a void return  
void GasPump::display(){
	
	Menu gasDisplay;

	gasDisplay.addText("-------------Gas++ Station---------\n");

	//for loop to build up gas station display with information 
	for(int i=0; i<15; i++){

		cout << "i " << i << endl;	
		gasDisplay.addText(("|                                 |\n"));
	
		if(i==2)
			gasDisplay.addText("      $" + to_string(costPerGallon) + " per gallon.\n");
	
		else if(i==5)
			gasDisplay.addText("      Gallons Pumped: " + to_string(gasDispensed)+"\n");
		else if(i==7)
			gasDisplay.addText("      Amount Owed: " + to_string(charge) + "\n");	
		
		
	}

	gasDisplay.addText("-----------------------------------\n");
	
	//add in optoins for menu
	gasDisplay.addOption("\n1. Pump Gallon of Gas.\n", "1");
	gasDisplay.addOption("2. Stop Pumping Gas\n", "2");
	gasDisplay.addOption("3. Quit Program\n", "3");

	gasDisplay.display();

	//set this gas display to the mina gas display
	mainGasDisplay = gasDisplay;
}

///////////////////////////////////////////////////////////////////

//selectOption function 
//has void return 
bool GasPump::selectOption(){

	int choice = stof(mainGasDisplay.parseOption("Please select an option: "));

	if(choice == 3)
		return false;
	else if(choice == 2)
		reset();
	else
		pump();

	return true;
}

///////////////////////////////////////////////////////////////////

//reset function 
//has a void return value 
void GasPump::reset(){
	
	charge = 0.0;
	gasDispensed = 0.0;

}

///////////////////////////////////////////////////////////////////

//pump function 
//has a void return 
void GasPump::pump(){

	gasDispensed += 1.0;
	charge += costPerGallon;

}

///////////////////////////////////////////////////////////////////

//quit function 
//has void return 
void GasPump::quit(){
	exitStatus = true;
}

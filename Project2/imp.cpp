#include <iostream>
#include <string>
#include <cassert>
#include <fstream>
#include "stockType.h"
#include "stockListType.h"
#include <iomanip>

using namespace std;

// StockType Members ////////////////////////////////////////////////////////////////////////

void stockType::leader()
{
	// Because all other functions are private. The 'Leader' Function will
	// be the only Public function and its Job will be to Call all other functions.

	// Gets UserName
	cout << "Please enter your Name" << endl;
	cin >> userName;
	cout << string(25,'\n');

	// Calls Functions
	getData();
	//listChoice();
	printData();
}

void stockType::getData()
{
	// Function extracts Data from stock.txt file,
	// Stores data in appropriate variables.
	// (See ch.3 [pg.157] for extracting data from files)

	inData.open("stock.txt"); // Opens "stock.txt" file

	/*assert(inData);
	// Code to Extract Data goes Here
	inData >> symbol >> oPrice >> cPrice >> tHigh
		>> tLow >> pClose >> volume;*/

	inData.close(); // Closes "stock.txt" file.
}

void stockType::listChoice()
{
	int choice;

	// Function allows user to choose which Listing they would like to produce.
	// SORT BY (Symbol, or percent gain) --- |See ch.8 && ch.16 for Sorting operations|

	cout << "Hello " << userName << ", Which Listing option would you like?";
	cout << endl << endl;
	cout << " 1 = Sort by Stock Symbol." << endl;
	cout << " 2 = Sort by Percent Gain (High to Low)." << endl;
	cin >> choice;

	if (choice == 1) // User choice will dictate which 'Sort' algorithm is executed.
		cout << string(20, '\n') << "Sort by Stock Symbol";
	else if (choice == 2)
		cout << string(20, '\n') << "Sort by Percent Gain";
	else
		cin.clear();
		cout << string(20, '\n') << "Sorry. Your input is invalid. Please try again!" << endl;
		listChoice();
}
void stockType::printData()
{
	// Function prints Extracted Data
	// in appropriate Format.
	// (See ch.3[pg.142] for formatting Output)
	 pGain=((cPrice-pClose)/pClose)*100;

	cout << "*********  First Inverstor's Heaven  **********" << endl;
	cout << "*********     Financial Report       **********" << endl;
	cout << "Stock             Today                 Previous  Percent" << endl;
	cout << "Symbol  Open    Close   High    Low     Close     Gain	     Volume" << endl;
	cout << "------  -----   -----   -----   -----   --------  -------     ------ " << endl;

	cout << fixed << setprecision(2);
	cout << symbol << string(2,' ')
		 << "$" << oPrice << string(2,' ')
		 << "$" << cPrice << string(2,' ')
		 << "$" << tHigh << string(2,' ')
		 << "$" << tLow << string(2,' ')
		 << "$" << pClose << string(2,' ')
		 << pGain << "%" << string(2, ' ')
		 << volume << endl;
	cout << string(25, '-') << endl;
}

// stockListType Members////////////////////////////
void stockListType:: createList()
{
	stockListType stock[10];
}

// Operator Overloads //////////////////////////////////////////////////////////

istream& operator>>(istream& inData, stockType& stock)
{
	// Algorithm Details

	assert(inData);
		// Code to Extract Data goes Here
		inData >> stock.symbol >> stock.oPrice >> stock.cPrice >> stock.tHigh
			>> stock.tLow >> stock.pClose >> stock.volume;

	return inData;
}
stockType::stockType()
{
	// Initializes all variables
	symbol = "AAA";
	oPrice = 0.00;
	cPrice = 0.00;
	tHigh = 0.00;
	tLow = 0.00;
	pClose = 0.00;
	pGain = 0.00;
	volume = 0;
}

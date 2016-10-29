// Test Final Project.cpp : Defines the entry point for the console application.
// This is the final progam for Group 2.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include "listType.h"
#include "stockType.h"
#include "stockListType.h"

using namespace std;
char choice;
void getData(stockListType& list);

int main()
{
	char choice;
	stockListType stockList(100);  
	
	cout << fixed << showpoint;
	cout << setprecision(2);

	getData(stockList);
	stockList.sort();

	do
	{
	cout<<"\n\n\t Option Menu  ";
	cout<<"\n\n\t ---------------------------------------";
	cout<<"\n\n\t Sort By Symbol   :     1";
	cout<<"\n\n\t Sort By Gain	 :	2";
	cout<<"\n\n\t Exit		 :	3";
	cout<<"\n\n\t  Please select an option:  ";
	cin>> choice;
	
	switch(choice)
	{
	case'1':		
		stockList.printBySymbol();	
		break;
	case '2':		
		stockList.printByGain();	
		break;
	case '3':
		break;
	default: cout << choice << " is not a valid menu item.\n";
		cout << endl;
	}
	}while (choice!='3');	

	return 0;
}
void getData(stockListType& list)
{
	ifstream infile;
	string fileName;
    string buffer;
    int noOfStocks = 0;
	cout<<"Enter the file name: ";
	cin>>fileName;

	infile.open(fileName);

	if (!infile)
	{
		cout << "Input file does not exist. Program will terminate" << endl;
		system("pause");
		exit(1);
	}
    while (!infile.eof())
    {
        getline(infile, buffer, '\n');
        if (!infile.eof())
            noOfStocks = noOfStocks + 1;
    }
    infile.seekg(0, ios_base::beg);// this is very important here, since you just set the file cursor to the end of the file thus all subsequent read calls will fail
    list.setLength(noOfStocks);
    list.getList(infile);
}

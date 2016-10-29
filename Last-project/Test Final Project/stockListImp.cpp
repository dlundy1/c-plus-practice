#include "stdafx.h"
#include <iostream>
#include "stockType.h"
#include "stockListType.h"

using namespace std;

void stockListType::printBySymbol()
{
	int i;
	double closingBalance = 0;
	cout << "*********  First Inverstor's Heaven  **********" << endl;
	cout << "*********     Financial Report       **********" << endl; 
	cout << "Stock             Today                 Previous  Percent" << endl;
	cout << "Symbol  Open    Close   High    Low     Close     Gain	     Volume" << endl;
	cout << "------  -----   -----   -----   -----   --------  -------     ------" << endl;
	for (i = 0; i < length; i++)
	{
		cout << elements[i] << endl;
		closingBalance += elements[i].getClosePrice() * elements[i].getnoOfShares();
	}
	cout << "Closing Assets: $" << closingBalance << endl;
	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
}
void stockListType::printByGain()
{
	int i;
	cout << "*********  First Inverstor's Heaven  **********" << endl;
	cout << "*********     Financial Report       **********" << endl;
	cout << "*********        Gain/Loss           **********" << endl; 
	cout << "Stock             Today                 Previous  Percent" << endl;
	cout << "Symbol  Open    Close   High    Low     Close     Gain	     Volume" << endl;
	cout << "------  -----   -----   -----   -----   --------  -------     ------ " << endl;

	for (i = 0; i < length; i++)
		cout << elements[indexByGain[i]] << endl;
	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
}
void stockListType::printReports()
{
	printBySymbol();
	cout << endl << endl;
	cout << "***** Report by Gain *****" << endl;
	printByGain();
}
void stockListType::sort()
{
	listType<stockType>::sort();
	sortByGain();
}
void stockListType::sortByGain()
{
	bool *temp;
	temp = new bool[length];
	int i, j;
	int maxIndex;
		for (i = 0; i < length; i++)
	{
		temp[i] = false;
		indexByGain[i] = 0;
	}
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
			if (!temp[j])
			{
				maxIndex = j;
				break;
			}
		for (j = maxIndex + 1; j < length; j++)
			if (!temp[j])
				if (elements[maxIndex].getPercentChange() <
					elements[j].getPercentChange())
					maxIndex = j;
		indexByGain[i] = maxIndex;
		temp[maxIndex] = true;
	}
}
stockListType::stockListType()
{
	indexByGain = new int[50];
}
stockListType::stockListType(int size)
		: listType<stockType>(size)

{
	indexByGain = new int[size];
}


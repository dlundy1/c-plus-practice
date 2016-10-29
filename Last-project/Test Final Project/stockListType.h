#ifndef H_StockListType
#define H_StockListType
#include "stdafx.h" 
#include "listType.h"
#include "stockType.h"

class stockListType: public listType<stockType>
{
public:
	void printBySymbol();
	void printByGain();
	void printReports();
	void sort();
	void sortByGain();
	stockListType();
	stockListType(int size);
private:
	int   *indexByGain;
};

#endif
	
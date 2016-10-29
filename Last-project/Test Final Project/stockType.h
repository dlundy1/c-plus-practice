#ifndef H_stockType
#define H_stockType
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class stockType
{
	friend ostream& operator<< (ostream&, const stockType&);
	friend ifstream& operator>> (ifstream&, stockType&);

public:
	void setStockInfo(string symbol, double openPrice,
				      double closePrice, double high,
				      double Low, double prevClose,
					  int	shares);
	string getSymbol();
	double getPercentChange();
	double getOpenPrice();
	double getClosePrice();
	double getHighPrice();
	double getLowPrice();
	double getPrevPrice();
	int getnoOfShares();

	stockType();
	stockType(string symbol, double openPrice,
			  double closePrice, double high,
			  double Low, double prevClose,
			  int	shares);

	int operator ==(stockType other);
	int operator !=(stockType other);
	int operator <=(stockType other);
	int operator >=(stockType other);
	int operator >(stockType other);
	int operator <(stockType other);


private:
	string	stockSymbol;
	double		todayOpenPrice;
	double		todayClosePrice;
	double		todayHigh;
	double		todayLow;
	double		yesterdayClose;
	double		percentChange;
	int		noOfShares;
};

#endif
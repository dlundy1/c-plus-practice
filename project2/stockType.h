#include <iostream>
#include <string>

using namespace std;

class stockType
{
public:

	string userName; // gets name of User
	string symbol; // stock Symbol
	double oPrice; // Opening Price
	double cPrice; // Closing Price
	double tHigh; // Today's High
	double tLow; // Today's Low
	double pClose; // Previous closing Price (yesterday)
	double pGain; // Percent Gain
	int volume; // Number of shares Currently being held
	// Member_Functions
	void leader();

	//Member_Overloads
	stockType operator>>(const stockType) const;
	stockType operator<<(const stockType) const;
	stockType operator==(const stockType) const;

	//Friend_Overloads
	friend istream& operator>>(istream&, stockType&);
	friend ostream& operator<<(ostream&, const stockType&);

	stockType(); // Constructor, initializes all variables
	//~stockType(); // Destructor

private:
	void getName();
	void setStockData();
	void listChoice();
	void printData();
};

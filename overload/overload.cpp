#include <iostream>
#include <fstream>

using namespace std;

class testClass
{
public:
	// code

	string fName, lName;

	friend istream& operator >> (istream&, testClass&);

	void printName();

private:
	// code
protected:
	// code
};
int main()
{
	ifstream inData;
	inData.open("name.txt");

	testClass object;

	inData >> object;
	object.printName();

	return 0;
}

istream& operator >> (istream& inData, testClass& object)
{
	// code

	//cout << "Gathering Data..." << endl;
	inData >> object.fName >> object.lName;

	return inData;
}

void testClass::printName()
{
	cout << "First Name: " << fName << endl;
	cout << "Last Name: " << lName;
}

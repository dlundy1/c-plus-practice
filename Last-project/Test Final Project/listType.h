#ifndef H_listType
#define H_listType
#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

template <class T>
class listType
{
public:
	bool isEmptyList() const;  // Function returns a nonzero value (TRUE)if list is empty
	bool isFullList() const;   // Function returns a nonzero value (TRUE)if list is full
	void setLength(int len);
	int showLength() const;
	void search(T searchItem) const;  // Search the list for searchItem
	void insert(T newElement); // Inserts newElement in the list
	void deleteItem(T deleteElement);  // if deleteElement is found in the list it is deleted
	void sort();  // sort the list
	void print() const; // Output the elements of the list
	void getList(ifstream&);  // read and store elements in the list
	void destroyList();
    void printList() const; // Output the elements of the list
	listType(int listSize);  // constructor that creates an array of the size specified by the parameter listSize
	listType(); // default constructor
	~listType(); // destructor
protected:
	void binarySeacrh(T searchItem, int& found, int& index);
	int maxSize; // maximum number that can be stored in the list
	int length;  // number of elements in the list
	T *elements; //pointer to the array that holds list elements
};
// constructor to set the array size specified by the user
template<class T>
listType<T>::listType(int listSize) 
{
	maxSize = listSize;
	length = 0;
	elements = new T[maxSize];
}
template<class T>
listType<T>::listType()  // default constructor
{
	maxSize = 50;
	length = 0;
	elements = new T[50];
}
template<class T>
listType<T>::~listType()  //destructor
{
	delete [] elements;
}
template<class T>
bool listType<T>::isEmptyList() const
{
	return (length == 0);
}
template<class T>
bool listType<T>::isFullList() const
{
	return (length == maxSize );
}
template<class T>
void listType<T>::sort()   //selection sort
{
	int i, j;
	int min;
	T  temp;
	for (i = 0; i <length; i++)
	{
		min = i;
		for (j = i+1; j < length; ++j)
		   if (elements[j] < elements[min])
			min = j;
		temp = elements[i];
		elements[i] = elements[min];
		elements[min] = temp;
	}//end for
}//end sort
template<class T>
void listType<T>::print() const
{
	int i;

	for (i = 0; i < length; i++)
		cout << elements[i] << endl;
	cout << endl;
}//end print
template<class T>
void listType<T>::getList(ifstream& infile)
{
	int i;

	for (i = 0; i < length; i++)
		infile >> elements[i];	
}
template<class T>
void listType<T>::search(T searchItem) const
{
	int found;
	int index;
	binarySeacrh(searchItem,found,index);

	if (found)
		cout << "Item is in the list" << endl;
	else
		cout << "Item is not in the list" << endl;
}
template<class T>
void listType<T>::binarySeacrh(T searchItem, int& found, int& index)
{
	int first = 0;
	int last = length -1;
	int mid;
	found = 0;
	while( !found && (first <= last))
	{
		mid = (first + last) / 2;

		if (elements[mid] == searchItem)
			found = 0;
		else
			if (elements[mid] > searchItem)
				last = mid - 1;
			else
				first = mid + 1;
	}
	loc = mid;
}
template<class T>
void listType<T>::setLength(int len)
{
	length = len;
}
template<class T>
int listType<T>::showLength() const
{
	return length;
}
#endif 



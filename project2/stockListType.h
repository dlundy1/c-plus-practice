template <class elemType>
class stockListtype
{
public:
	bool isEmpty() const;
	// Function to determine whether the list is empty.
	// Postcondition: Returns 'true' if the list is empty,
	// otherwise it returns 'false'.

	bool isFull() const;
	// Function to determine whether the list is empty.
	// Postcondition: Returns true if the list is empty,
	// otherwise it returns false.

	bool search (const elemType& searchItem) const;
	// Function to search the list for searchItem.
	// Postcondition: Returns 'True' if search Item
	// is found in the list. Otherwise returns 'False'

	void insert(const elemType& newElement);
	// Function to insert newElement into list.
	// Precondition: Prior to insertion, the list
	// must not be full.
	// Postcondition: The new list is the old list plus newElement

	void remove (const elemType& removeElement);
	// Function to remove removeElement from the list.
	// Postcondition: If removeElement is found in the list,
	// it is deleted from the list, and the list is OLD LIST - removeElement.
	// If the list is empty, output the message "Cannot delete from Empty list"

	void destroyList();
	// Function to destroy the list.
	// Postcondition: length = 0;

	void printList();
	// Default constructor
	// Sets the length of the list to 0.
	// Postcondition: length = 0;

protected:
	elemType list[100];
	int length;
};

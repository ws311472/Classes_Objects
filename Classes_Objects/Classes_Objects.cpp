// Classes_Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
/*

class Driver
{
public:
	int driverID;
	string driverFirstname; // THE DRIVER'S FIRST NAME
	string driverLastname; // DRIVER'S LAST NAME
	string driverDob; // THEIR DATE OF BIRTH
	string output; // ALL THE ABOVE MASHED UP TOGETHER
};

int main()
{
	Driver firstname;
	Driver lastname;
	Driver dob;
	Driver soutput;

	firstname.driverFirstname = "Alan";
	lastname.driverLastname = "Partridge";
	dob.driverDob = "23/11/99";
	soutput.output = lastname.driverLastname +", "+ firstname.driverFirstname +", "+ dob.driverDob +"";

	cout << soutput.output;
	return 0;
}
*/

class Book
{
	int PageCount;
	int CurrentPage;
public:
	Book(int Numpages); // Constructor
	~Book() {}; // Destructor
	void SetPage(int PageNumber);
	int GetCurrentPage(void);
};
Book::Book(int NumPages)
{
	PageCount = NumPages;
}
void Book::SetPage(int PageNumber)
{
	CurrentPage = PageNumber;
}
int Book::GetCurrentPage(void)
{
	return CurrentPage;
}
int main()
{
	Book ABook(128);
	ABook.SetPage(56);
	std::cout << "Current Page " << ABook.GetCurrentPage() << std::endl;
	return 0;
}
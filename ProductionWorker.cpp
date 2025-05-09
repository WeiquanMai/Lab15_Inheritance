// Implementation file for the ProductionWorker class
#include "ProductionWorker.h"
#include <string>

// Mutators
void ProductionWorker::setShift(int s)
{
	shift = s;
}
void ProductionWorker::setPayRate(double r)
{
	payRate = r;
}
ProductionWorker* ProductionWorker::createNewProductionWorker()
{
	// Variables
	string aName;
	string aDate;
	int s;
	double r;

	// Ask user for information
	cout << "Enter name of new Employee: ";
	getline(cin, aName);
	cout << "Enter hire date of new employee: ";
	getline(cin, aDate);
	cout << "Enter shift for new employee (1=day, 2=night): ";
	cin >> s;
	cout << "Enter hourly pay rate for new employee: ";
	cin >> r;
	cin.ignore();

	// Call Constructor
	ProductionWorker* newWorker = new ProductionWorker(aName, aDate, s, r);

	return newWorker;
}

// Accessors
int ProductionWorker::getShiftNumber() const
{
	return shift;
}
string ProductionWorker::getShiftName() const
{
	if (getShiftNumber() == 1) 
	{
		return "Day";
	}
	else if (getShiftNumber() == 2) 
	{
		return "Night";
	}
	else
	{
		return "Invalid input";
	}
}
double ProductionWorker::getPayRate() const
{
	return payRate;
}

void ProductionWorker::printWorkerData() const
{
	cout << "Name: " << getEmployeeName() << endl;
	cout << "Employee number: " << getEmployeeNumber() << endl;
	cout << "Hire date: " << getHireDate() << endl;
	cout << "Shift: " << getShiftName() << endl;
	cout << "Shift number: " << getShiftNumber() << endl;
	cout << "Pay rate: " << getPayRate() << endl;
}

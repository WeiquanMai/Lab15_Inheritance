/*
CSC237- C++
Project Name: Inheritance
Student: Weiquan Mai
Date: April 3, 2025
Description: Lab has us implement the code for functions in ProductionWorker.h that was provided by Professor Morgan into ProductionWorker.cpp.
Lab then utilizes a command-loop structure to control the flow of the program.
Supported commands:
c  CREATE a new ProductionWorker object
h  print HELP text
p  PRINT ProductionWorker information
q  QUIT (end the program).
*/

#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "Employee.h"
using namespace std;

// Function Prototypes
void outputHelpText();

int main()
{
	// Variables
	string command;
	bool keepRunning = true;
	ProductionWorker* worker = nullptr;

	while (keepRunning == true)
	{
		// Prompt user for command input. Use command input to control function of the program
		cout << "Enter command (or 'h' for help): ";
		getline(cin, command);

		// Ignore empty commands
		if (command == " ") {
			cin.ignore();
		}
		else if (command == "c" || command == "C")
		{
			worker = ProductionWorker::createNewProductionWorker();
		}
		else if (command == "h" || command == "H")
		{
			outputHelpText();
		}
		else if (command == "p" || command == "P")
		{
			if (worker != nullptr)
			{
				worker->printWorkerData();
			}
			else
			{
				cout << "No ProductionWorker has been created yet.";
			}
		}
		else if (command == "q" || command == "Q")
		{
			keepRunning = false;
		}
		else
		{
			cout << "Invalid command: " << command << endl;
		}
	} // End of while loop

	delete worker;
	cout << "Exiting the program.";
	return 0;
}

void outputHelpText()
{
	// Output list of supported commands
	cout << "Supported commands: " << endl;
	cout << "         c        create a new ProductionWorker object." << endl;
	cout << "         h        print help text." << endl;
	cout << "         p        proint ProductionWorker information." << endl;
	cout << "         q        quit (end the program.)" << endl;
}

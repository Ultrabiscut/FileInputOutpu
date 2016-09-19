#include <iostream>
#include <string>
#include <fstream>	//step 1 (for working with files
using namespace std;

//Reads from the first character in the stream to 
//	the first whitespace (space, tab, enter/return)

//Datatype of variable determines teh datatype of the input

/*
Steps for working with files:

1. Inlcude the <fstream> library (header file)
2. Declare a variable of datatype ifstream (input file stream)
	- for output file, use ofstream
3. Open the file
4.Use the file stream variables along with <<, >>, getline
  to read/write information to/from the files.  This is
  usually accomplished by looping.
5. Close the files as soon as we are done with them

*/


int main()
{
	//step 2 - declare variable of type ifstream
	ifstream inputFile;
	string sName;

	//step 3 - fileObject.open("pathToFile\fileName.txt")
	inputFile.open("names.txt");

	//step 4 - at this point the file should be open
	//try to read from the file
	while (!inputFile.eof())
	{
		//read a name from the file, store it in sName
		inputFile >> sName;

		//display the name in the console
		cout << sName << endl;
	}

	//step 5 - close the file!!!
	inputFile.close();


	return 0;
}
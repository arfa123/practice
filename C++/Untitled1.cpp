#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

main() {
	
	string grade[3] = {"A". "B" ."C"};
	int x = 9;
	x %= 2;
	double arr[10] = {0.0};
	
	cout << x;
	
	ofstream outFile; // Handle for the input file
	char outputFileName[] = "myFileOut.txt"; // The file is created in the current directory
	char ouputText[100] = "Welcome to VU"; // used to write into the file
	outFile.open(outputFileName, ios::out); // Opening the file
	// checking that file is successfully opened or not
	if (!outFile)
	{
		cout << "Can't open input file named " << outputFileName << endl;
		exit(1);
	}
	
	// Writing into the file
	outFile << ouputText;
	outFile.close(); 
	
	
	char name[50]; // used to read name of employee from file
	char sal[10]; // used to read salary of employee from file
	char dept[30]; // used to read dept of employee from file
	ifstream inFile; // Handle for the input file
	char inputFileName[] = "myFileOut.txt"; // file name, this file is in the current directory
	inFile.open(inputFileName, ios::in); // Opening the file
	// checking that file is successfully opened or not
	if (!inFile)
	{
		cout << "Can't open input file named " << inputFileName << endl;
		exit(1);
	}
	
	// Reading the complete file word by word and printing on screen
	while (!inFile.eof())
	{
		inFile >> name >> sal >> dept;
		cout << name << "\t" << sal << " \t" << dept << endl;
	}
	inFile.close();
//		char s1[ 20 ] = "Welcome to ";
//		char s2[] = "Virtual University ";
//		char s3[ 40 ] = "";
//		cout<< "s1 = " << s1 << endl << "s2 = " << s2 << endl << "s3 = " << s3 << endl;
//		cout<< "strcat( s1, s2 ) = " << strcat( s1, s2 );
//		cout << "\ns1 = " << strlen(s1);
//		cout << "strncat( s3, s1, 6 ) = " << strncat( s3, s1, 6 );
//	   	char a = getchar();
//	   	char c = 'a';
//	   	cout << a;
//	   	cout << isdigit(a);
//		int multi[5][10];
//		char *myarray[] = {"Amir", "Jehangir"};
//		cout << "\n The value of multi is: " << myarray;
//		cout << "\n The value of *multi is: " << **multi; 
	
//	   char name[20] = "Arfa Ahmed";
//	   char str [20] = "Hello World";
//	   char *ptr1 = &name[0];
//	   char *ptr2 = &str[0];
//	   int i = 0;
//	   
//	   cout << "ptr1 value: " << ptr1;
//	   cout << "ptr2 value: " << ptr2;	   
//	   
//	   cin >> name;
//	   
//	   for (i = 0; i <= 100; i++) {
//	   	   if (name[i] == '\0') {
//		   	  break;
//			}
//	   	   cout << name[i];
//	   }
//	   cout << name;
}


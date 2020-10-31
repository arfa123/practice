/* This program explains the use of command line arguments */
#include <iostream>
#include<string.h>
#include <stdlib.h> //Included for ‘atoi( )’ function
using namespace std;
main(int argc, char **argv)
{
	int disp, count;
	
//	cout << argc;
	cout << **argv++;
	
	if(argc < 2)
	{
		cout << "Enter the length of the count\n";
		cout << "on the command line. Try again.\n";
		return 1;
	}
	
	if(argc == 3 && !strcmp(*(argv + 2), "display"))
	{
		disp = 1;
	}
	else
	{
		disp = 0;
	}
	
	for(count = atoi(*(argv + 1)); count; --count)
	{
		if(disp)
		{
			cout << count <<' ';
		}
	}
	
	cout << '\a'; // ’\a’causes the computer to beep
	
	return 0;
} 

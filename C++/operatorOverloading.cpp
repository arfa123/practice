using namespace std;

#include <iostream>
#include "date.h"

main() {
	Date d1 (26, 12, 2002), d2(28,2 ,2000), d3;
	d1.display();
	++d1;
	cout << "\nAfter adding 1 day, the date is ";
	d1.display();
	cout << endl;
	d2.display();
	d2 = d2 + 5;
	cout << "\nAfter adding 5 days to the above date";
	d2.display();
}


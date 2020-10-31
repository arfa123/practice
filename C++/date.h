class Date{
	private:
		int day;
		int month;
		int year;
		int daysOfMonth(Date d); // returns the no of days in a month
		static const int daysInMonth[]; // array containing the 12 month’s days
		bool leapYear(int); // tells the year is leap year or not
	public:
		Date(int d = 1, int m = 1, int y = 1900); // constructor with default arguments
		void setDate(int, int, int); // set the date with given arguments
		void display(); // Display the date on the screen
		// operators prototypes
		Date operator ++ (); // pre increment operator used as ++date1
		Date operator + (int); // Plus operator used as date1 + 5
};
// The implementation of the date class.
// initializing the no of days, take 0 for month zero.
const int Date::daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Displaying the function on the screen
void Date::display()
{
	cout <<"\nDate:" << day << "-" << month << "-" << year;
}
//constructor of the date
Date::Date(int d, int m, int y)
{
	setDate(d, m, y);
}
// setting the date as given arguments
void Date::setDate(int d, int m, int y)
{
	year = y;
	// if month is wrong then set it to 1
	if (month < 1 && month > 12)
		month = 1;
	else
		month = m;
	// if day is wrong then set it to 1
	if (month == 2 && leapYear(y))
		if (d >=1 && d <=29)
			day = d;
		else
			day = 1;
	else
		if( d >= 1 && d <= daysInMonth[month])
			day = d;
		else
			day = 1;
}
// This function return the number of days in a month
int Date::daysOfMonth(Date d)
{
	if (d.month == 2 && leapYear(d.year)) // if leap year then Feb is 29
		return 29;
	else
		return daysInMonth[d.month];
}
// Testing that the year is leap or not.
bool Date::leapYear(int y)
{
	if ( (y%400 == 0) || (y%100 != 0 && y%4 == 0))
		return true;
	else
		return false;
}
// + operator overloaded for the date. Used as date1 + 5
Date Date::operator + (int numberOfDays)
{
	for (int i = 1; i <= numberOfDays; i++)
	{
		++(*this); // calling the pre increment operator
	}
	return *this;
}
// Pre increment operator
Date Date::operator ++ ()
{
	if (day == daysOfMonth(*this) && month == 12) // end year
	{
		day = 1;
		month = 1;
		++year;
	}
	else if(day == daysOfMonth(*this)) // end month
	{
		day = 1;
		++month;
	}
	else // not the last day of the month
	{
		day++;
	}
}

/*MenyBuganim_302490610      BaruchRothkoff_311603252*/
#include<iostream>
#include"Range.h"
using namespace std;

#ifndef Date_H
#define Date_H

class Date{
	int day;
	int month;
	int year;
public:
	void set(int _day, int _month, int _year )throw(Range){			//check our conditions. if somthing wrong throw it to his class.
		if (_day < 1 || _day>31)throw DayRange(_day);
		if (_month < 1 || _month>12)throw MonthRange(_month);
		if (_year < 0)throw YearRange(_year); 
		year = _year;
		month = _month;
		day = _day;
	}
	~Date(){}
};
#endif // !Date_H



/*MenyBuganim_302490610      BaruchRothkoff_311603252*/
#include<iostream>
using namespace std;
#ifndef Range_H
#define Range_H


class Range	{		//range class. with her help we will figure out where our problem.
protected:
	const int errorVal;
public:
	Range(int errorVal) :errorVal(errorVal){}
	virtual ~Range(){}
	virtual void print() = 0;
	virtual void printToFile(fstream&file) = 0;
};

class YearRange :public Range{
public:
	YearRange(int errorVal) :Range(errorVal){}
	void print(){ cout << "Year " << errorVal << " is out of range." << endl; }
	void printToFile(fstream&file){ file << "Year " << errorVal << " is out of range." << endl; }
	~YearRange(){}
};
class MonthRange :public Range{
public:
	MonthRange(int errorVal) :Range(errorVal){}
	void print(){ cout << "Month " << errorVal << " is out of range." << endl; }
	void printToFile(fstream&file){ file << "Month " << errorVal << " is out of range." << endl; }
	~MonthRange(){}
};
class DayRange :public Range{
public:
	DayRange(int errorVal) :Range(errorVal){}
	void print(){ cout << "Day " << errorVal << " is out of range." << endl; }
	void printToFile(fstream&file){ file << "Day " << errorVal << " is out of range." << endl; }
	~DayRange(){}
};
#endif // !Range_H
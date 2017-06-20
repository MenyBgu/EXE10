/*MenyBuganim_302490610      BaruchRothkoff_311603252*/
#include<iostream>
#include <fstream>
#include"Date.h"
using namespace std;

int main(){
	Date one;
	int d = 0, m = 0, y = 0;
	fstream file("date.txt", ios::out);				//open new file.
	cout << "please enter day,month and year." << endl;
	

	if (cin >> d >> m >> y){			//check all int's.
			
		if (!file){
			cout << "error open file." << endl;		//check file is open succesfuly.
			exit(1);
		}
		try{
			one.set(d, m, y);
			cout << "The Data correct." << endl;
		}
		catch (Range&range){		
			range.print();
			range.printToFile(file);
		}
	}
	else{													//try again with good values.
		cout << "one or more details are not int." << endl;
	}
	file.close();							//file close.
	system("pause");
	return 0;
}
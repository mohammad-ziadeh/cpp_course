/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Clock {
    
	// already private
	int sec;
	int min;
	int hr;


public:
	void setTime(const int, const int,const int);
	// the const here mean that the vlaues of the class will not be changed
	void printTime() const;
	void incHr();
	void incMin();
	void incSec();
	bool equalTime(const Clock&) const;

};

//
// ##############
//

// start setting time
void Clock::setTime(const int x, const int y, const int z) {
	hr = x;
	min = y;
	sec = z;
}

//
// ##############
//

// start printing time
void Clock::printTime() const {
	if (hr < 10)
		cout << '0';
	cout << hr << ':';
	if (min < 10)
		cout << '0';
	cout << min << ':';
	if (sec < 10)
		cout << '0';
	cout << sec;

}

//
// ##############
//

// start time increment

// ------ hour
void Clock::incHr() {

	if (hr == 23) {
		hr = 0;
		return;
	}
	hr++;
}
// ------ min
void Clock::incMin()
{

	if (min == 59) {
		min = 0;
		incHr();
		return;

	}
	min++;
}
// ------ sec
void Clock::incSec() {

	if (sec == 59) {
		sec = 0;
		incMin();
		return;
	}
	sec++;
}

//
// ##############
//

// start checking if time is equal
bool Clock::equalTime(const Clock& time1) const {
	if (sec == time1.sec && min == time1.min && hr == time1.hr) {
		return true;
	}
	return false;
}

//
// ##############
//


int main()
{
// when u define a class it will be called obj


	Clock c1;
	Clock c2;
	int hour, min, sec;
	hour = 23;
	min= 59;
	sec = 59;


	c1.setTime(hour,min,sec);
	c2.setTime(hour,min,sec);

	c1.printTime();

	cout << endl;


	cout << c1.equalTime(c2);





// for (int i =0; i < 10000; i++){

// 	c1.incSec();
// 	cout << endl;
// 	c1.printTime();
// }

	return 0;
}





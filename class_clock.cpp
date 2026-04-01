/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Clock {

	// already private
	int sec = 0;
	int min;
	int hr;


public:


	// this is the construter
	Clock();
	Clock(int,int,int);
	//
	static int id; // this will create an id that is assigned to the class  
	void setTime(const int, const int,const int); 	// the const here mean that the vlaues of the class will not be changed
	void printTime() const;
	void incHr();
	void incMin();
	void incSec();
	bool equalTime(const Clock&) const;
	// deconstucter
	~Clock();

};

//
// ############## DECLARING THE STATIC VALUE IN MEMMMORY
//

int Clock::id = 5;

//
// ############## DECONSTRUCTOR
//

Clock::~Clock() {
	return;
}

//
// ############## DEFULT CONSTRUCTOR
//

Clock::Clock() {
	hr = 0;
	min = 0;
	sec = 0;
}

//
// ##############
//

Clock::Clock(int x, int y, int z) {
	hr = x;
	min = y;
	sec = z;
}

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
	// else if its not 23
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


	Clock c1; // this will create and obj called c1
	Clock c2;


	// u can do arr of class
	// 	Clock arr[6];
	// 	arr[0].setTime(2,3,4);


// 	int hour, min, sec;
// 	hour = 23;
// 	min= 59;
// 	sec = 59;
// 	c1.setTime(hour,min,sec);
// 	c2.setTime(hour,min,sec);
// 	c1.printTime();
// 	cout << endl;
// 	cout << c1.equalTime(c2);
//

c1.id++;
cout << c1.id << endl << c2.id;



// for (int i =0; i < 10000; i++){

// 	c1.incSec();
// 	cout << endl;
// 	c1.printTime();
// }

	return 0;
}







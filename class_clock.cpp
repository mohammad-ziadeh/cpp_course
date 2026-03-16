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
	bool compare();

};

void Clock::setTime(const int x, const int y, const int z){
    hr = x;
    min = y;
    sec = z;
}

void Clock::printTime() const{
    cout << hr << ':' << min << ':' << sec;
}


int main()
{
// when u define a class it will be called obj


	Clock c1;
	Clock c2;
	
	c1.setTime(20,30,50);

	c1.printTime();

	return 0;
}

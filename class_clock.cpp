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
	void setTime(const int&, const int&,const int&);
	void printTime();
	void incHr();
	void incMin();
	void incSec();
	bool compare();

}


int main()
{
// when u define a class it will be called obj

	
	std::cout<<"Hello World";

	return 0;
}

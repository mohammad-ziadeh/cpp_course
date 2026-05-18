/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

// 1
// sending obj of person
void fun(Person p) {
	p.print(); // will print the data of person like normal

}


// 2
// sending obj of student
void fun(Person p) {
	p.print(); // will just print the data the get inherted to the Ptudent from Person

}

// these two will take a copy of the sent obj not the obj it self
// adding &
void fun(Person& p) { // will point at the same exact place that the sent obj pointed at so any change here will change the original

}



//  {{ virtual case }}  //
// if in the Person class u added to the function print { virtual void print();}


// 1
void fun(Person *p) {  // the p here is a pointer
	p->print();   // this will print all the sent obj data they will be call by refrence
}



// 2
void fun(Person *p) {  // the p here is a pointer
	p->print();   // here sence its virtual it will call the Student print
	// not the Person print seance the print fun in Person is virtual
}





int main()
{

	// case 1
	Person moh;
	Student st_moh;

	// 1
	fun(moh);

	// 2
	fun(st_moh);


	// case 2
	Person *moh;
	Student *st_moh;


	// 1
	fun(moh);


	// 2
	fun(st_moh);

	std::cout<<"Hello World";

	return 0;
}

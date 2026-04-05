/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Student {
private:
	int student_id;
	int course_id;


public:
	static int number_of_students;
	static int number_of_courses;
	static string uni_name;
	string student_phone_number;
	string student_name;
	string student_course_name;
	int student_course_mark;
	string course_name;


	// constructor //
	Student();

	// functions //

	void cousreIdAutoInc();
	void createStudent(const string,const string);
	void createCourse(const string);
	void enrollInCourse(const string);
	void giveStudentMark(const int);
	void printStudentData() const;


	// Deconstructor //
	~Student();
};

// statics to use for id auto incremints

string Student::uni_name = "JU";
int Student::number_of_students = 0;
int Student::number_of_courses = 0;


// student id auto inc on create
Student::Student() {
	number_of_students++;
	student_id = number_of_students;
}

// course auto inc on call
void Student::cousreIdAutoInc() {
	number_of_courses++;
	course_id = number_of_courses;
}

// creating student
void Student::createStudent(const string new_phone_number,const string new_name) {
	student_phone_number = new_phone_number;
	student_name = new_name;
}

// creating course
void Student::createCourse(const string new_course_name) {
	cousreIdAutoInc();
	course_name = new_course_name;
	cout << "New Course Created: " << new_course_name << endl << endl;
}

// enrolling student in a course
void Student::enrollInCourse(const string new_student_course_name) {
	if (new_student_course_name == course_name) {
		student_course_name = new_student_course_name;
		cout << "student " << student_name << " assigned to course " << new_student_course_name << endl << endl;
	} else {
		cout << "no course called " << new_student_course_name << endl << endl;
	}
}

// give student a mark for his course 
void Student::giveStudentMark(const int new_mark) {

	student_course_mark = new_mark;
	cout << "Give Student New Mark: " << new_mark << endl << endl;
}


// printing all user data
void Student::printStudentData() const {
	cout << "student ID: " << student_id << endl << "student Name: " << student_name << endl << "student Phone Number: " << student_phone_number << endl << endl << "Student Course ID: " << course_id << endl << "student Course Name: " << student_course_name << endl << "student Course Mark: " << student_course_mark << endl << endl;
}

// memmory cleanup
Student::~Student() {
	cout << "Deconstructor activate" << endl;
}


int main()
{
	Student moh, ahmed;

	moh.createStudent("0791318735", "Mohammad");
	moh.createCourse("C++");
	moh.enrollInCourse("C++");
	moh.giveStudentMark(98);
	moh.printStudentData();

	cout << endl << endl << "new Student:" << endl << endl;
	
	ahmed.createStudent("079985132", "Ahmed");
	ahmed.createCourse("MIS");
	ahmed.enrollInCourse("MIS");
	ahmed.giveStudentMark(88);
	ahmed.printStudentData();



	return 0;
}

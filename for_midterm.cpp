/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class User {
private:
	static int id;
	string password;


public:
	static int user_count;

	string user_name;
	string email;
	void printData() const;

	User(const string,const string,const string);
	~User();

};

int User::user_count = 0;
int User::id = 0;

User::User(const string init_user_name, const string init_user_email, const string init_password) {
    user_name = init_user_name;
	email = init_user_email;
	password = init_password;
    
	user_count ++;
	id ++;
}

User::~User(){
    cout << "user end"  << endl;
}

void User::printData() const {

	cout << "id is: " <<id << endl;
	cout << "name is: " <<user_name << endl;
	cout << "email is: " <<email << endl;
	cout << "password is: " <<password << endl;
}


class Student : public User {

private:
	static int st_id;

public:
	string st_name;
	string email;

	void printData() const;

	Student(string, string,string, string,string);
		~Student();


};

int Student::st_id =0;

Student::Student(string init_name, string init_email, string init_user_name, string init_user_email, string init_password) : User( init_user_name,  init_user_email,  init_password) {
	email = init_email;
	st_name = init_name;

	st_id++;
}

Student::~Student(){
    cout << "Student end" << endl;
}

void Student::printData() const{
	cout << "student id is: " <<st_id << endl;
	cout << "user name is: " <<user_name << endl;
	cout << "student name is: " <<st_name << endl;
	cout << "user email is: " << User::email << endl;
	cout << "student email is: " <<email << endl;
}


int main()
{
	User user1("mohammad", "mohammad@gamil.com","password"), user2("mohammad", "mohammad@gamil.com","password"), user3("mohammad", "mohammad@gamil.com","password"), user4("mohammad", "mohammad@gamil.com","password"), user5("mohammad", "mohammad@gamil.com","password"), user6("mohammad", "mohammad@gamil.com","password"), user7("mohammad", "mohammad@gamil.com","password"), user8("mohammad", "mohammad@gamil.com","password");     

	Student st1("st_mohammad", "st_mohammad@gamil.com","mohammad", "mohammad@gamil.com","password"),st2("st_mohammad", "st_mohammad@gamil.com","mohammad", "mohammad@gamil.com","password");

	st2.printData();
	cout << User::user_count << endl;
	return 0;
}





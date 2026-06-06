/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

// class for composition
class Address {
    public:
        int street_number;
        int building_number;
        
        Address(const int ,const int);
    
};

Address::Address(const int st_num,const int b_num){
    street_number = st_num;
    building_number = b_num;
}


// ###########################################################
// ###########################################################

// parent class for student that use composition
class User {
    private:
        static int user_count;
    
    public:
        int user_id;
        string name;
        // 1- virtual fun 
        virtual void print_details();
        
        Address usrAddress;
        // 2- composition
        User(const string, const int, const int);
    
    
    
};
int User::user_count = 0;

User::User(const string usr_name, const int st_num, const int b_num) : usrAddress(st_num, b_num){
    user_id = ++user_count;
    name = usr_name;
}

// User print fun
void User::print_details(){
    cout << "User ID: " << user_id << " | " << "User Name: " << name << " | " << "St Address: " << usrAddress.street_number << " | " << "Building Number: " << usrAddress.building_number << endl;
}

// ###########################################################
// ###########################################################


// dreived class from User for inhertance
class Student : public User {
    private:
        static int student_count;
    
    public:
        int student_id;
        int usr_id;
        
        // 4- pointer
        string *courses_ptr;
        int courses_count;
        
        void print_details();
        Student(const string, const int, const int, int);
        
        ~Student();
    
};
int Student::student_count = 0;

Student::Student(const string usr_name, const int st_num, const int b_num, int courses_num) : User(usr_name, st_num, b_num) { // 3- inhertance
    student_id = ++student_count;
    usr_id = user_id;
    
    courses_count = courses_num;
    
    // 5- dynamic array
    courses_ptr = new string[courses_count];
    
}

// Student print fun
void Student::print_details(){
    cout << "Student ID: " << student_id << " | " << "Student Name: " << name << endl;
    
    cout << "Student Courses: " << endl;
    for (int i = 0; i < courses_count; i++){
        cout << "Course " << i+1 << " : " << courses_ptr[i] << endl;
    }
}


Student::~Student() {
    delete[] courses_ptr;
}


int main()
{
    User* usr1 = new User("user-Mohammad", 20, 50);
    User* usr2 = new User("user-Ali", 100, 9);
    Student* st1 = new Student("student-Mohammad", 45, 12, 3);
    Student* st2 = new Student("student-ali", 9, 21, 2);
    
    
    // virtual fun use
    User* virtual_usr = st1;


    st1->courses_ptr[0] = "Math";
    st1->courses_ptr[1] = "English";
    st1->courses_ptr[2] = "Arabic";
    
    virtual_usr->print_details();
    
    cout << "--------------------------------------" << endl << endl;
    
    st2->courses_ptr[0] = "Art";
    st2->courses_ptr[1] = "i dont know i ran out of names";

    st2->print_details();
    
    cout << "--------------------------------------" << endl << endl;
    
    usr1->print_details();
    
    return 0;
}

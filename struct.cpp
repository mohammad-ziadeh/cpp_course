/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

struct Name{
    
    string first_name;
    string last_name;
    
    
};


struct Person {
  int id;
  string address;
  // inhertance of the Name
  Name PersonName;
    
};



int main()
{
    Person moh, ahmad;
    Person people[5];
    string name1;
    string name2;
    
    name1 = moh.PersonName.first_name = "mohammad";
    name2 = people[0].PersonName.first_name = "person one in array";
    moh = people[0];
    
    cout << moh.PersonName.first_name;
    // cout << name2;

    return 0;
}

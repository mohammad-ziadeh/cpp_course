/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Address {
    private: 
        int streetNum;
        int buildingNum;
        
    public:
        void printAddress();
        Address(int,int);
};

Address::Address(int x, int y){
    streetNum = x;
    buildingNum = y;
}

void Address::printAddress(){
    cout << streetNum << " " << buildingNum;
}

class Student{
    private:
        int id;
        string name;
        
    public: 
        Address StAddress;
        Student(int , int , string , int);
};     

Student::Student(int x, int y, string z, int w) : StAddress(x,y){
    id = w;
    name = z;
}

int main()
{
    
    Student st1(23232,50,"mohammad",0);
    st1.StAddress.printAddress();
    
    

    return 0;
}

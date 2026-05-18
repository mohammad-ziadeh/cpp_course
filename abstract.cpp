/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


class parent {
public:
    virtual void print() = 0; 
};

class child : public parent {
public:
    int id = 5;
    void print() { 
        cout << id; 
    }
};

void callPrint(parent &p) { 
    p.print(); 
}

int main() {
    child c;
    callPrint(c); 
    return 0;
}

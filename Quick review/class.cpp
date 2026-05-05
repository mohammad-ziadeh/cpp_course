1. Class Basics and Members

  Definition: A class is a collection of a fixed number of components (members) and is a reserved word in C++. Members can be variables or functions (typically declared via prototypes).

  Memory: A class is just a definition; no memory is allocated for the class itself. Memory is only allocated when you declare objects (also called instances).

  Accessing Members: Members are accessed by name using the dot operator (.) on an object.

  {
  class MyClass {
    public:
        int myVar;        // Variable member
        void myFunc();    // Function member (prototype)
};

MyClass obj; // Object instance (memory allocated here)
obj.myVar = 10; // Accessing via dot operator
  }


2. Access Specifiers
  Categories: Members are classified as private, protected, or public.

  Default Behavior: By default, all members of a class are private.

  Visibility: public members are accessible outside the class, while private members are not. These are declared using the specifier followed by a colon (e.g., public:).


3. Initialization and Constants
  Initialization: In C++11 and later, you can initialize variables within the class definition. In older versions, this was not allowed.

  Constant Functions: A member function is "constant" if it has const at the end of its heading. These functions cannot modify any member variables of the class and can only call other constant member functions.


class Example {
    int x = 5; // Allowed in C++11+
    void show() const { 
        // x = 10; // ERROR: Cannot modify x in a const function
    }
};


4. Specialized Member Functions
  Accessors and Mutators: A mutator function modifies member variables, while an accessor only retrieves or accesses them without modification.

  Constructors: Used to guarantee member variables are initialized. They have the same name as the class, no return type (not even void), and execute automatically when an object is created. A class can have multiple constructors; one without parameters is the default constructor.
  
  Destructors: Used for cleanup when an object goes out of scope. A class has only one destructor, which has no parameters, no return type, and is named with a tilde (~) followed by the class name.



class Box {
    public:
        Box() { /* Default Constructor */ }
        ~Box() { /* Destructor */ }
};




5. Operations and Usage
  Operations: The only built-in operations permitted on classes are assignment (=) and member selection (. and ->).

  Functions: Classes can be passed to functions by value or reference and can be returned by functions.

  Client: Any program or software that uses a class is referred to as a client of that class.




6. Static Members
  Static Variables: Only one memory space is allocated for a static variable, regardless of how many objects exist. All objects share this same space. They exist even if no object of the class has been created.

  Static Functions: public static members can be accessed using the class name and the scope resolution operator (::).

  Instance Variables: Non-static member variables are called instance variables because each instance (object) gets its own copy.

class Counter {
    public:
        static int count; // Shared by all objects
};

int Counter::count = 0; // Accessing via scope resolution operator



 1. Pointer variables contain the addresses of other variables as their values

 2. The pointer itself is a distinct data type, but it doesn't have its own unique keyword name (it adapts to the type it points to)

 3. A pointer variable is declared using an asterisk (*) between the data type and the variable (e.g., 'int *p;' points to an int space, 'char *ch;' points to a char space)

 4. The ampersand (&) is called the "address of" operator

 5. The "address of" operator (&) returns the exact memory address of its operand (e.g., 'p = &num;' sets the value of pointer 'p' to the address where 'num' is stored)

 6. When used as a unary operator prefixing a pointer, the asterisk (*) is called the "dereferencing" operator

 7. The memory location indicated by a pointer is accessed using the dereferencing operator '*' (e.g., '*p = 25;' changes the value at that address to 25)

 8. Use the member access arrow operator (->) to access the components of an object pointed to by a pointer (shortcut for '(*p).member')

 9. Pointer variables can be initialized using 0, NULL, or the address of a variable of the same type. In modern C++, use the reserved word 'nullptr'

 10. The only literal number that can be directly assigned to a pointer variable is 0 (or 'nullptr')

 11. Valid pointer arithmetic operations: increment (++), decrement (--), adding an integer, subtracting an integer, and subtracting one pointer from another

 12. Pointer arithmetic scales automatically: adding/subtracting an integer shifts the address by (integer * size of the underlying data type)

 13. Pointer variables of the same type can be compared using relational operators (e.g., ==, !=, <, >)

 14. The value (address) of one pointer variable can be assigned to another pointer variable of the exact same type

 15. A variable created on the Heap during program execution is called a dynamic variable

 16. The 'new' operator is a reserved word used to create a dynamic variable

 17. The 'delete' operator is a reserved word used to deallocate/free the memory occupied by a dynamic variable

 18. The 'new' operator has two forms: one for a single dynamic variable, and one for an array of dynamic variables

 19. The statement 'p = new int;' allocates an integer space on the Heap and stores that new address inside 'p'

 20. The 'delete' operator has two forms: one for a single dynamic variable ('delete p;'), and one for dynamic arrays ('delete [] p;')

 21. A standard array name is a constant pointer; it is permanently locked pointing to the first component of that array

 22. To create a dynamic array, use the array form of new (e.g., 'p = new int[10];' creates 10 integers dynamically and stores the base address in 'p')

 23. Standard array notation '[ ]' can be used to access components of a dynamic array (e.g., 'p[0]' is the first item, 'p[i]' is the (i + 1)th item)

 24. A dynamic array must be destroyed using 'delete [] p;' to properly clean up all its components from memory

 25. C++ allows you to create dynamic multidimensional arrays using pointers to pointers

 26. In the statement 'int **board;', the variable board is a pointer to a pointer (often used for dynamic 2D grids)

 27. In a shallow copy, two or more pointers copy the raw address and end up pointing to the exact same memory space/data on the heap

 28. In a deep copy, the actual data is duplicated into a brand-new heap allocation, so both pointers have their own independent copies of the data

 29. If a class has a destructor, it executes automatically whenever a class object goes out of scope to clean up internal dynamic memory

 30. If a class contains pointer variables, the built-in default assignment operator (=) will only perform a dangerous shallow copy

 31. A copy constructor automatically runs when an object is declared and initialized using another object, or when an object is passed into a function by value

 32. C++ allows a derived class object to be safely passed to a formal parameter of its base class type

 33. The binding of virtual functions happens at execution time (Late Binding / Run-time Binding), not at compile time

 34. Virtual functions are declared in the base class using the reserved word 'virtual' to enable polymorphic behavior via pointers

 35. A class is called an Abstract Class if it contains one or more Pure Virtual Functions (declared with '= 0;')

 36. You cannot create instances/objects of an abstract class because it is an incomplete blueprint missing function definitions

 37. Abstract classes can still contain normal variables, constructors, and regular functions, but it must provide definitions for those non-pure members

 38. The address of operator (&) can be used to return the address of a private member variable of a class if a class function explicitly permits it

#include <iostream>
#include <complex>
#include <vector>
using namespace std;

// a DECLARATION is a statement that introduces a name into the program, it specifies type
    // a TYPE defines a set of possible values and a set of operations (for an object)
    // an OBJECT is some memory that holds a value of some type
    // a VALUE is a set of bits interpreted according to type
    // a VARIABLE is a named object

// c++ offers a variety of fundamental types
    bool b;     // Boolean, possible values are true and false
    char c;     // character, for example, 'a', 'z', and '9'
    int i;      // integer, for example -213, 42, and 1066
    double d;   // double-precision floating-point number, for example, 3.14 and 299793.0

// each fundamental type corresponds directly to hardware facilities, having a fixed size determining its possible range of values
    // the size of a type is implementation-defined (ie. varying among differing machines) and can be obtained by sizeof() operator
    // a char variable is of the natural size to hold a character on a given machine (typicaly an 8-bit byte)
    // the sizes of the other types are quoted in multiples of the size of a char
    void list_fundamental_sizes()
    {
        cout << "The size of a boolean is " << sizeof(b) << " * sizeof(char)\n";
        cout << "The size of a character is " << sizeof(c) << " * sizeof(char)\n";
        cout << "The size of an integer is " << sizeof(i) << " * sizeof(char)\n";   // an integer is four times the size of a char
        cout << "The size of a double is " << sizeof(d) << " * sizeof(char)\n";     // a double is double the size of an integer
    }

// in ASSIGNMENTS and in arithmetic operations, C++ performs all meaningful conversions between the basic types
    void some_function()
    {
        d = 2.2;    // initialize floating-point number
        i = 7;      // initialize integer
        d = d+i;    // assign sum to d
        i = d*i;    // assign product to i (truncating the double d*i to an int)
        cout << "Assigning a double type expression to an int type variable will truncate the decimals of the computed expression\n";
    }

// note that = is the ASSIGNMENT OPERATOR, not the initialization operator
    void some_other_function()
    {
        double d1 = 2.3;             // initialize d1 assigned as 2.3
        double d2 {2.3};             // initialize d2 as 2.3

        complex<double> z = 1;       // a complex number with double-precision floating-point scalars
        complex<double> z2 {d1,d2};  // curly-brace-delimited initializer lists
        complex<double> z3 = {1,2};  // the = is optional with { ... }
        cout << z2 << "\n";

        vector<int> v {1,2,3,4,5,6}; // a vector of ints

        int i1 = 7.2;       // i1 becomes 7 (surprise?) it is bc we are using the ASSIGNMENT OPERATOR which makes type conversions
        int i2 {7.2};       // error: floating-point to integer conversion, bc no assignment operator
        int i3 = {7.2};     // error: floating-point to integer conversion (the = is redundant), initializers dont type convert
    }

int main()
{
    list_fundamental_sizes();
    some_function();
    some_other_function();
}
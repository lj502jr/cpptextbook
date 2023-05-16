#include <iostream>
using namespace std;

double square(double x)         // returns a double-precision floating-point number
{
    return x*x;
}

void print_square(double x)     // returns nothing as a void function
{
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main()                      // main returns int status-code to op sys; 0 is success, non-zero's are different errors
{
    print_square(1.234);
}
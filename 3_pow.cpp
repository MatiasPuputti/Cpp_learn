//Header thet defines the standard input/output stream objects.
#include <iostream> 

// Using directive defines namespace as standard.
// Namespaces are used to group code, and prevent/work around naming conflicts. 
using namespace std;

//Function declarations.
void print_pow();
double power(int, int);
pair <int,int> input();

// Main function.
int main()
{
    // Function call,
    print_pow();    

    // The 0 traditionally indicates to the os that the program was run succesfully.
    return 0;
}

// Function with void,wich prints the result. 
void print_pow()
{
    pair <int, int> ints = input();
    double result = power(ints.first, ints.second);

    cout << ints.first << " to the " << ints.second << "th power is: " << result << endl;
}

// Function wich return a pair from received input.
pair <int,int> input()
{
    int base, exponent;

    cout << "Base: ";
    cin >> base;

    cout << "Exponent: ";
    cin >> exponent;
    return  make_pair(base, exponent);
}

// Fuction with double return type.
double power(int base, int exponent)
{
double result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

return result;
}

//  08.03.2020
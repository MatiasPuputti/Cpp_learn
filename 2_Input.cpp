//Header thet defines the standard input/output stream objects.
#include <iostream> 

// Using directive defines namespace as standard.
// Namespaces are used to group code, and prevent/work around naming conflicts. 
using namespace std;

// Main function.
int main()
{
    // Declaration of a variable.
    int num;

    //writing a line so that user knows to tell us value.
    cout << "Give me a number to plave in the num variable: ";

    //Asking for a value to initialize num with.
    cin >> num;

    // Writing a line.
    cout << "The value of the variable num is: " << num << endl;

    // The 0 traditionally indicates to the os that the program was run succesfully.
    return 0;
}

//  07.03.2020
#include <iostream>
using namespace std;

main()
{
    int number = 10;
    int *p = &number;
    cout << "The Address of the variable is: " << p << endl;
    cout << "The value of the variable is: " << *p << endl;
}
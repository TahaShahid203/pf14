#include <iostream>
using namespace std;

void changeNumber(int *number)
{
    (*number)++;
    cout << "Number before function: "<< *number << endl;
}
main()
{
    int number = 10;
    changeNumber(&number);
    cout << "Number after function is: " << number << endl;
}
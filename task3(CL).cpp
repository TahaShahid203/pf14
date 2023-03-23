#include <iostream>
using namespace std;

void swapNumbers(int *number1, int *number2)
{
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void passingArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

main()
{
    int number1 = 10;
    int number2 = 20;

    swapNumbers(&number1, &number2);

    cout << "Number 1 : " << number1 << endl;
    cout << "Number 2 : " << number2 << endl;


//-----------------------------------------------------------------

    int size = 3;
    int numbers[size] = {1,2,3};

    passingArray(numbers, size);

}
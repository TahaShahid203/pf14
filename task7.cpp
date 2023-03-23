#include <iostream>
using namespace std;

void shiftArray(int arr[], int size);

main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number for index " << i << ": ";
        cin >> array[i];
    }

    shiftArray(array, size);\
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

void shiftArray(int arr[], int size)
{
    for (int i = 0; i < 3; i++)
    {
        int temporary = arr[0];
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = temporary;
    }
}
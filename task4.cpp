#include <iostream>
using namespace std;

float averageOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum*1.0/size;
}

main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number of index " << i << ": ";
        cin >> numbers[i];
    }
    cout << "Your average: " << averageOfArray(numbers, size) << endl;
}
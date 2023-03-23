#include <iostream>
using namespace std;

void mergeArray(int arr1[], int size1, int arr2[], int size2)
{
    int arr3[size1 + size2];
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i]; 
    }

    for (int i = 0; i < (size1 + size2); i++)
    {
        cout << arr3[i] << " ";
    }
}

main()
{
    int size1;
    cout << "Enter size of array 1: ";
    cin >> size1;
    int array1[size1];
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter element " << i << " of first array: ";
        cin >> array1[i];
    }
    int size2;
    cout << "Enter size of array 1: ";
    cin >> size2;
    int array2[size2];
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter element " << i << " of second array: ";
        cin >> array2[i];
    }

    mergeArray(array1, size1, array2, size2);
    

}
#include <iostream>
using namespace std;

bool isSparseOrNot(int matrix[][3], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > 4)
    {
        return true;
    }
    return false;
}

main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter a" << i << j << ": ";
            cin >> matrix[i][j];
        }
    }
    cout << isSparseOrNot(matrix, 3) << endl;
}
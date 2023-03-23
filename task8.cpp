#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void userInterface(char seatingPlan[][6], int rowSize);
void printSeatingArrangement(char seatingPlan[][6], int rowSize);
main()
{
    char seatingPlan[13][6];
    while (true)
    {
        userInterface(seatingPlan, 13);
        cout << "Press any key to try again: ";
        getch();
        continue;
    }
}
void userInterface(char seatingPlan[][6], int rowSize)
{
    string answer, desiredRow, desiredColumn;
    cout << "Enter type of class: (B: Business class, F: First class, E: Economy class) ";
    cin >> answer;

    while (true)
    {
        cout << "Enter desired row: ";
        cin >> desiredRow;

        cout << "Enter desired column: ";
        cin >> desiredColumn;

        if (answer == "F")
        {
            if (!(stoi(desiredRow) >= 1 && stoi(desiredRow) <= 2))
            {
                cout << "Invalid" << endl;
                getch();
                continue;
            }
        }
        else if (answer == "B")
        {
            if (!(stoi(desiredRow) >= 3 && stoi(desiredRow) <= 7))
            {
                cout << "Invalid" << endl;
                getch();
                continue;
            }
        }
        else if (answer == "E")
        {
            if (!(stoi(desiredRow) >= 8 && stoi(desiredRow) <= 13))
            {
                cout << "Invalid" << endl;
                getch();
                continue;
            }
        }

        if (seatingPlan[stoi(desiredRow)][stoi(desiredColumn)] == 'X')
        {
            cout << "Seat unavailable. Try again" << endl;
            getch();
            continue;
        }
        else if (seatingPlan[stoi(desiredRow)][stoi(desiredColumn)] == '*')
        {
            seatingPlan[stoi(desiredRow)][stoi(desiredColumn)] = 'X';
            break;
        }
    }
}

void printSeatingArrangement(char seatingPlan[][6], int rowSize)
{
    cout << "A\t\tB\t\tC\t\tD\t\tE\t\tF" << endl;
    for (int i = 0; i < rowSize; i++)
    {
        cout << "Row " << i + 1 << "\t\t";
        for (int j = 0; j < 6; j++)
        {
            cout << seatingPlan[i][j] << "\t\t";
        }
        cout << endl;
    }
}

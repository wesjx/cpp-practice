#include <iostream>
using namespace std;

void printVector(const int selectedNumbers[], int vectorSize)
{
    cout << "The numbers in the vector are:\n";
    for (int i = 0; i < vectorSize; i++)
    {
        cout << selectedNumbers[i] << " ";
    }
    cout << "\n";
}

void printAverage(const int selectedNumbers[], int vectorSize)
{
    int sum = 0;
    for (int i = 0; i < vectorSize; i++)
    {
        sum += selectedNumbers[i];
    }
    cout << "The average of the vector values is:\n" << (sum / vectorSize) << "\n";
}

void printEvenNumbers(const int selectedNumbers[], int vectorSize)
{
    cout << "Even numbers in the vector:\n";
    for (int i = 0; i < vectorSize; i++)
    {
        if (selectedNumbers[i] % 2 == 0)
        {
            cout << selectedNumbers[i] << ", ";
        }
    }
    cout << "\n";
}

int main()
{
    int selectedNumbers[5];
    const int vectorSize = sizeof(selectedNumbers) / sizeof(selectedNumbers[0]);

    bool exitMenu = false;
    int menuOption;

    for (int i = 0; i < vectorSize; i++)
    {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> selectedNumbers[i];
    }

    while (!exitMenu)
    {
        cout << "\nSelect one of the options:\n"
             << "1 - Display all values in the vector\n"
             << "2 - Display even values in the vector\n"
             << "3 - Calculate and display the average of the values\n"
             << "4 - Exit\n"
             << "Option: ";
        cin >> menuOption;

        if (menuOption < 1 || menuOption > 4)
        {
            cout << "Invalid option. Please enter a number between 1 and 4.\n";
            continue;
        }

        switch (menuOption)
        {
        case 1:
            printVector(selectedNumbers, vectorSize);
            break;
        case 2:
            printEvenNumbers(selectedNumbers, vectorSize);
            break;
        case 3:
            printAverage(selectedNumbers, vectorSize);
            break;
        case 4:
            cout << "You have exited the program.\n";
            exitMenu = true;
            break;
        }
    }

    return 0;
}

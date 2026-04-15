#include <iostream>
using namespace std;

void pickNumbers(int table[3][3])
{
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter number " << count << " to create a 3x3 matrix: \n";
            cin >> table[i][j];
            count++;
        };
    }
    cout << endl;
};

void showMatrix(int table[3][3])
{
    cout << "Your created matrix: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << table[i][j] << " | ";
        }
        cout << endl;
    }
    cout << endl;
}

void sumAllNumbers(int table[3][3])
{
    int aux = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            aux += table[i][j];
        };
    }
    cout << "The sum of all numbers in the matrix: " << aux << endl;
}

void showHighestNumber(int highestNumber, int table[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (table[i][j] > highestNumber)
            {
                highestNumber = table[i][j];
            }
        }
    }

    cout << "The highest number in the matrix: " << highestNumber << endl;
};

void sumDiagonalNumbers(int table[3][3])
{
    int sumDiagonal = 0;
    for (int i = 0; i < 3; i++)
    {
        sumDiagonal += table[i][i];
    }
    cout << "The sum of the numbers in the main diagonal: " << sumDiagonal << endl;
    cout << endl;
};

int main()
{
    int table[3][3];
    int highestNumber = 0;

    pickNumbers(table);
    showMatrix(table);
    showHighestNumber(highestNumber, table);
    sumAllNumbers(table);
    sumDiagonalNumbers(table);

    system("pause");

    return 0;
}

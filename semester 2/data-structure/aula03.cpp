#include <iostream>
using namespace std;

int *fillVector(int n)
{
    int *vector = new int[n];

    for (size_t i = 0; i < n; i++)
    {
        cout << "Type a number for the position: " << i + 1 << "º : ";
        cin >> vector[i];
    }

    return vector;
}

void sort(int vector[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

int findNumber(int numberToFind, int n, int vector[])
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int center = (left + right) / 2;
        if (vector[center] == numberToFind){
            return center;
        }else if (vector[center] < numberToFind){
            left = center + 1;
        }else{
            right = center - 1;
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int n, numberToFind;
    cout << "Type the size of the vector: ";
    cin >> n;

    int *vec = fillVector(n);

    sort(vec, n);

    cout << "Type the number to find: ";
    cin >> numberToFind;

    int numberFound = findNumber(numberToFind, n, vec);

    if (numberFound == -1){
        cout << "Number not found!" << endl;
    }else{
        cout << "The number you were looking for: " << vec[numberFound];
    }
    
    delete[] vec;

    return 0;
}

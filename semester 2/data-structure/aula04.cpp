#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for (int i = 1; i < n; i++) {
        int k = arr[i];

        int j = i -1;

        while (j >= 0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = k;
    }
}

int main(int argc, char const *argv[])
{
    int arr[7] = {3, 2, 7, 80, 55, 21, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "input: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    insertionSort(arr, n);

    cout << "\noutput: ";
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    
    return 0;
}

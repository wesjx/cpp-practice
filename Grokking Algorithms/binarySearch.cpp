#include <iostream>
using namespace std;

int binarySearch(int list[5], int target, int sizeOfArray)
{
    int start = 0;
    int final = sizeOfArray - 1;

    while (start <= final)
    {
        int middle = (start + final) / 2;
        if (list[middle] == target)
        {
            return middle;
        }
        if (list[middle] > target)
        {
            final = middle - 1;
        } else {
            start = middle + 1;
        }
    }
    return -1;
}

int main()
{
    int list[5] = {1, 2, 3, 4, 5};
    int target = 1;
    int sizeOfArray = sizeof(list) / sizeof(list[0]);

    std:: cout << binarySearch(list, target, sizeOfArray);

    return 0;
}
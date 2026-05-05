#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    
    cout << "Type the size of vectors: ";
    cin >> n;
    
    int *v1 = new int[n];
    int *v2 = new int[n];
    int *v3 = new int[n];

    int *pt1, *pt2, *pt3;

    pt1 = v1;
    pt2 = v2;
    pt3 = v3;

    for (size_t i = 0; i < n; i++)
    {
        cout << "Type the number in position " << i + 1 << "º for the first vector: ";
        cin >> pt1[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << "Type the number in position " << i + 1 << "º for the second vector: ";
        cin >> pt2[i];
    }

    for (size_t i = 0; i < n; i++)
    {
       pt3[i] = pt1[i] + pt2[i];
    }
    

    cout << "Sum of the vector's value: \n";
    for (size_t i = 0; i < n; i++)
    {
        cout << pt3[i] << "\n";
    }
    
    delete[] v1;
    delete[] v2;
    delete[] v3;

    return 0;
}

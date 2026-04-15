#include <iostream>
using namespace std;

int main()
{
    int age;
    bool isAdult = false;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
    {
        cout << "Invalid age" << endl;
        return 1;
    }

    if (age > 18)
    {
        isAdult = true;
    }

    if (isAdult == true)
    {
        cout << "You are an adult" << endl;
        printf("Test: %d", age);
    }
    else
    {
        cout << "You are a minor" << endl;
    }

    return 0;
}

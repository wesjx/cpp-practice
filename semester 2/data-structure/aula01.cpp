#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    int result;

    cout << "Type a number: ";
    cin >> n1;
    int *p1 = &n1;
    
    cout << "Type another number: ";
    cin >> n2;
    int *p2 = &n2;

    result = *p1 + *p2;
    cout << "The sum of two numbers is: " << result;

    return 0;
}

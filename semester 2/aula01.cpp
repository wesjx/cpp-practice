#include <iostream>
using namespace std;

void mensagem_terminal()
{
    cout << "Type one number to check if it is a prime number: ";
}

bool check_prime_number(int number)
{
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int number;
    mensagem_terminal();

    cin >> number;

    if (check_prime_number(number))
    {
        cout << "The number: " << number << " is prime!" << endl;
    } else {
        cout << "The number: " << number << " is not prime!" << endl;
    }
    

    return 0;
}

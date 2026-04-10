#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void message()
{
    cout << "\nChoose an option: \n"
         << "  1 - Open \n"
         << "  2 - Save \n"
         << "  3 - Close \n"
         << "Your option: ";
}

void menu() {
        int options;

    while (options != 3)
    {

        if (options > 3)
        {
            cout << "\n Ops! \n Pick an option available! \n";
        }

        message();
        cin >> options;

        if (options == 3)
        {
            cout << "\nExiting...\n";
        }
    }
}

int main(int argc, char const *argv[])
{
    // fstream create;

    // create.open("text.txt", ios::out);

    // string phrase;

    // phrase = "mensagem de teste";

    // create << phrase;

    // ifstream read;
    // char letter[80];

    // read.open("text.txt");

    // while (read.get(letter))
    // {
    //     cout << letter;
    // }

    // read.close();

    menu();

    return 0;
}

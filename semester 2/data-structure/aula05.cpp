#include <iostream>
using namespace std;

const int MAX = 50;

struct StackNumbers{
    int vet[MAX];
    int top;
};

void initializer(StackNumbers& p){
    p.top = -1;
}

bool full(StackNumbers& p) {
    return p.top == MAX - 1;
}

bool empty(StackNumbers& p) {
    return p.top == -1;
}

void toStack(StackNumbers& p, int value) {
    if (!full(p)) {
        p.top = p.top + 1;
        p.vet[p.top] = value;
        cout << "Stacked: " << value << endl;
    } else {
        cout << "Stack full!" << endl;
    }
}

int toUnstack(StackNumbers& p) {
    if (!empty(p)) {
        return p.vet[p.top--];
    } else {
        cout << "Stack empty!" << endl;
        return -1;
    }
}

void message()
{
    cout << "\nChoose an option: \n"
         << "  1 - Inserction \n"
         << "  2 - Remove \n"
         << "  3 - Close \n"
         << "Your option: ";
}

void showStack(StackNumbers& p){

    cout << "------------" << "\nNew stack:\n";
    for (int i = p.top; i >= 0; i--) {
        cout << p.vet[i] << ", ";
    }
    
    cout << "\n------------" << endl;
    
}


int main(int argc, char const *argv[])
{
    int option = 0;
    StackNumbers stackNumbers;
    initializer(stackNumbers);
    int value;

    while (option != 3)
    {
        if (option > 3)
        {
            cout << "\n Ops! \n Pick an option available! \n";
        }

        message();
        cin >> option;

        if (option == 3)
        {
            cout << "\nExiting...\n";
        }

        switch (option)
        {
        case 1:
            cout << "Type the value to inserct into the stack: ";
            cin >> value;
            toStack(stackNumbers, value);
            showStack(stackNumbers);
            break;

         case 2:
            toUnstack(stackNumbers);
            showStack(stackNumbers);
            break;   
        
        default:
            break;
        }
    }
    
    return 0;
}

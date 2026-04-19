#include <iostream>
#include "Vehicle.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int quantity;
    cout << "How many products would you like to register? \n";
    cin >> quantity;
    std::vector<Vehicle> car(quantity);
    int * quantityPointer = new int[quantity];

    for(int i = 0; i < quantity; i++){
        std::string name, brand, plate, color;

        cout << "Type the name of the car number " << i + 1 << ": ";
        cin >> name;
        car[i].setName(name);

        cout << "Type the brand car number " << i + 1 << ": ";
        cin >> brand;
        car[i].setBrand(brand);

        cout << "Type the plate car number " << i + 1 << ": ";
        cin >> plate;
        car[i].setPlate(plate);

        cout << "Type the color car number " << i + 1 << ": ";
        cin >> color;
        car[i].setColor(color);

    }

    for (int i = 0; i < quantity; i++)
    {
        car[i].print(i + 1);
    }
    

    delete[] quantityPointer;
    return 0;
}

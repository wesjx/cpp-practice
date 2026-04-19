#include <iostream>
using namespace std;
class Vehicle
{
private:
    string name;
    string plate;
    string brand;
    string color;
public:
void setName(string name){
    this->name = name;
};
string getName(){
    return name;
};
void setPlate(string plate){
    this->plate = plate;
};
string getPlate(){
    return plate;
};
void setBrand(string brand){
    this->brand = brand;
};
string getBrand(){
    return brand;
};
void setColor(string color){
    this->color = color;
};
string getColor(){
    return color;
};

void print(int position) {
    std::cout << "-------------------------\n";
    std::cout << "Car number: " << position << "\n";
    std::cout << "Name:  " << name  << "\n";
    std::cout << "Brand: " << brand << "\n";
    std::cout << "Plate: " << plate << "\n";
    std::cout << "Color: " << color << "\n";
}
};

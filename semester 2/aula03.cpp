#include <iostream>
using namespace std;

typedef struct Products{
    string name;
    int initialQuantity;
    int quantitySold;
    double price;
    int quantityAvailable;
} Product;

void registerProducts(Product* product) {
    int quantity;
    cout << "How many products would you like to register? \n";
    cin >> quantity;
    int * quantityPointer = new int[quantity];

    for(int i = 0; i < quantity; i++){
        cout << "Type the product name: ";
        cin >> product[i].name;

        bool checkQuantity = true;

        while (checkQuantity)
        {
            cout << "Type initial quantity of product: ";
            cin >> product[i].initialQuantity;
            
            cout << "Type quantity of product sold: ";
            cin >> product[i].quantitySold;  
            
            product[i].quantityAvailable = product[i].initialQuantity - product[i].quantitySold;
            
            if(product[i].quantityAvailable >= 0){
                checkQuantity = false;
            } else {
            cout << "You cannot save more products sold than initial product. Try again.\n";
            }
        }

        cout << "Type the price of product: ";
        cin >> product[i].price;
    }

    for (int i = 0; i < quantity; i++)
    {
        cout << "Name: " << product[i].name << "\n";
        cout << "Quantity available: " << product[i].quantityAvailable << "\n";
    }
    
    delete[] quantityPointer;
}

int main(int argc, char const *argv[])
{
    Product* product = new Product();
    registerProducts(product);
    return 0;
}

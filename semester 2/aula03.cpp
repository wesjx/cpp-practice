#include <iostream>
using namespace std;

typedef struct Products{
    string name;
    int initialQuantity;
    int quantitySold;
    double price;
} Product;

void registerProducts(Product* product) {
    int quantity;
    cout << "How many products would you like to register? \n";
    cin >> quantity;
    int * quantityPointer = new int[quantity];

    for(int i = 0; i < quantity; i++){
        cout << "Type the product name: ";
        cin >> product[quantity].name;

        cout << "Type initial quantity of product: ";
        cin >> product[quantity].initialQuantity;

        cout << "Type quantity of product sold: ";
        cin >> product[quantity].quantitySold;

        cout << "Type the price of product: ";
        cin >> product[quantity].price;
    }

    for (int i = 0; i < quantity; i++)
    {
        cout << "name: " << product[quantity].name;
    }
    

    delete[] quantityPointer;
}

int main(int argc, char const *argv[])
{
    Product* product = new Product();
    registerProducts(product);
    return 0;
}

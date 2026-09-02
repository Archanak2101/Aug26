//============================================================================
// ame        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright noticeDescription : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

class Product {
private:
    int productId;
    string name;
    double price;
    int quantity;

public:

    void acceptDetails() {
        cout << "Enter Product ID, Name, Price, Quantity: ";
        cin >> productId >> name >> price >> quantity;
    }

    double totalValue() const {
        return price * quantity;
    }


    void displayDetails() const {
        cout << left << setw(8) << productId 
             << setw(15) << name 
             << setw(10) << price 
             << setw(8) << quantity 
             << setw(15) << totalValue();
    }

   
    bool isLowStock(int threshold) const {
        return quantity < threshold;
    }


    string getName() const {
        return name;
    }
};

int main() {
 
    Product products[5];

    cout << "--- Enter details for 5 products ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Product " << i + 1 << ":" << endl;
        products[i].acceptDetails();
    }

    cout << "\n====== INVENTORY REPORT ======" << endl;
    cout << left << setw(8) << "ID" << setw(15) << "Name" << setw(10) << "Price"
         << setw(8) << "Qty" << setw(15) << "Total Value" << endl;

    for (int i = 0; i < 5; i++) {
        products[i].displayDetails();
        cout << endl;
    }

 
    int highestIndex = 0;
    double maxTotal = products[0].totalValue();

    for (int i = 1; i < 5; i++) {
        if (products[i].totalValue() > maxTotal) {
            maxTotal = products[i].totalValue();
            highestIndex = i;
        }
    }
    cout << "\nHighest Value Product : " << products[highestIndex].getName() 
         << " (Rs. " << maxTotal << ")" << endl;

    int threshold;
    cout << "\nEnter threshold for Low Stock: ";
    cin >> threshold;

    cout << "Low Stock (threshold: " << threshold << ") : ";
    bool foundLowStock = false;
    for (int i = 0; i < 5; i++) {
        if (products[i].isLowStock(threshold)) {
            cout << products[i].getName() << ", ";
            foundLowStock = true;
        }
    }
    if (!foundLowStock) {
        cout << "None";
    }
    cout << endl;

    return 0;
}	


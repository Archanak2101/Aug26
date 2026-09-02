//============================================================================
// ame        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright noticeDescription : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

double reorderCost(int qty, double unitPrice) {
    return qty * unitPrice;
}

double reorderCost(double qty, double unitPrice) {
    return qty * unitPrice;
}


double reorderCost(int qty, double unitPrice, double taxRate) {
    double baseCost = qty * unitPrice;
    return baseCost + (baseCost * (taxRate / 100.0)); 
}

double applyDiscount(double price, double discountPercent = 10.0) {
    return price - (price * (discountPercent / 100.0));
}

int main() {
    cout << "--- Function Overloading Results ---" << endl;
    

    cout << "Cost (int qty: 10, price: 25.50) : Rs. " << reorderCost(10, 25.50) << endl;
    
   
    cout << "Cost (double qty: 4.5, price: 30.0) : Rs. " << reorderCost(4.5, 30.00) << endl;
    
    cout << "Cost (with 5% Tax) : Rs. " << reorderCost(10, 25.50, 5.0) << endl;
    
    cout << "\n--- Default Argument Results ---" << endl;
    
    cout << "Discounted Price (Custom 20%) : Rs. " << applyDiscount(1000.0, 20.0) << endl;
    
    cout << "Discounted Price (Default 10%) : Rs. " << applyDiscount(1000.0) << endl;
    
    return 0;
}
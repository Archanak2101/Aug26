//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int main() {
    int statusReg = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg = 0b11001010;

    cout << "--- Hardware Register Access ---\n\n";


    const int* regPtr1 = &statusReg;
    cout << "1. regPtr1 pointing to statusReg. Value: " << *regPtr1 << "\n";



    regPtr1 = &dataReg;


    int* const regPtr2 = &controlReg;


    *regPtr2 = 0b11110000;
    cout << "2. Wrote new value to controlReg through regPtr2. New Value: " << *regPtr2 << "\n";




    const int* const regPtr3 = &statusReg;
    cout << "3. regPtr3 pointing to statusReg. Value: " << *regPtr3 << "\n";


    return 0;
}


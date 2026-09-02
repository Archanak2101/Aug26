//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;


bool parsePacket(const int* rawData, int size, const int** outMin, const int** outMax) {

    if (size <= 0) {
        return false;
    }

    *outMin = &rawData[0];
    *outMax = &rawData[0];


    for (int i = 1; i < size; i++) {
        if (rawData[i] < **outMin) {
            *outMin = &rawData[i];
        }
        if (rawData[i] > **outMax) {
            *outMax = &rawData[i];
        }
    }

    return true;
}


int main() {
    int packet[] = {45, 12, 67, 8, 55, 31};
    const int* minPtr = nullptr;
    const int* maxPtr = nullptr;

    if (parsePacket(packet, 6, &minPtr, &maxPtr)) {
        cout << "Calibration Min : " << *minPtr << endl;
        cout << "Calibration Max : " << *maxPtr << endl;
    }

    return 0;
}

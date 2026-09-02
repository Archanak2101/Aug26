//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;


void resetSensorPairV1(int reading1, int reading2) {
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}


void resetSensorPairV2(int& reading1, int& reading2) {
    int temp = reading1;
    reading1 = reading2;
    reading2 = temp;
}


void resetSensorPairV3(int* reading1, int* reading2) {
    int temp = *reading1;
    *reading1 = *reading2;
    *reading2 = temp;
}

int main() {
    int A = 55;
    int B = 12;



    cout << "--- V1: Call by Value ---\n";
    cout << "Before : A=" << A << "  B=" << B << "\n";
    resetSensorPairV1(A, B);
    cout << "After  : A=" << A << "  B=" << B << "    <- values unchanged\n\n";

    cout << "--- V2: Call by Reference ---\n";
    cout << "Before : A=" << A << "  B=" << B << "\n";
    resetSensorPairV2(A, B);
    cout << "After  : A=" << A << "  B=" << B << "    <- values swapped\n\n";

    cout << "--- V3: Call by Pointer ---\n";
    cout << "Before : A=" << A << "  B=" << B << "\n";
    resetSensorPairV3(&A, &B);
    cout << "After  : A=" << A << "  B=" << B << "    <- values swapped back\n";

    return 0;
}

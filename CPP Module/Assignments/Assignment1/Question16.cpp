//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cmath>

using namespace std;


double computeRMS(double* signal, int n) {
    double sumSq = 0.0;
    for (int i = 0; i < n; i++) {
        double val = *(signal + i);
        sumSq += (val * val);
    }
    return sqrt(sumSq / n);
}


void normalise(double* signal, int n) {
    double maxAbs = 0.0;

    for (int i = 0; i < n; i++) {
        if (fabs(*(signal + i)) > maxAbs) {
            maxAbs = fabs(*(signal + i));
        }
    }

    if (maxAbs > 0) {
        for (int i = 0; i < n; i++) {
            *(signal + i) = *(signal + i) / maxAbs;
        }
    }
}


int countZeroCrossings(double* signal, int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        double current = *(signal + i);
        double next = *(signal + i + 1);


        if ((current > 0 && next < 0) || (current < 0 && next > 0)) {
            count++;
        }
    }
    return count;
}


void applyGain(double* signal, int n, double gainFactor) {
    for (int i = 0; i < n; i++) {
        *(signal + i) = *(signal + i) * gainFactor;
    }
}

void printSignal(double* signal, int n) {
    cout << "{ ";
    for (int i = 0; i < n; i++) {
        cout << *(signal + i) << " ";
    }
    cout << "}\n";
}

int main() {

    double signal[] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};
    int n = 7;

    cout << "Original Signal: ";
    printSignal(signal, n);

    double rms = computeRMS(signal, n);
    cout << "RMS Value      : " << rms << "\n";

    int zeroCrossings = countZeroCrossings(signal, n);
    cout << "Zero Crossings : " << zeroCrossings << "\n";

    cout << "\nApplying Normalisation...\n";
    normalise(signal, n);
    cout << "Normalised     : ";
    printSignal(signal, n);

    cout << "\nApplying Gain of 2.0...\n";
    applyGain(signal, n, 2.0);
    cout << "After Gain     : ";
    printSignal(signal, n);

    return 0;
}

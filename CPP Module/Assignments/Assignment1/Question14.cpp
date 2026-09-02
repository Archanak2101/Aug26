//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cstdlib> //
#include <string>

using namespace std;

void runSimulation(int warn, int critical, int num_readings) {
    int normal = 0, warning = 0, crit = 0, shutdown = 0;


    for (int i = 0; i < num_readings; i++) {
        int temp = rand() % 70;

        if (temp < warn) {
            normal++;
        } else if (temp >= warn && temp < critical) {
            warning++;
        } else if (temp >= critical && temp < 60) {
            crit++;
        } else {
            shutdown++;
        }
    }

    cout << "Config  : Warn=" << warn << "C  Critical=" << critical << "C  Readings=" << num_readings << "\n";
    cout << "Results : Normal:" << normal << "  Warning:" << warning << "  Critical:" << crit << "  Shutdown:" << shutdown << "\n";
}


int main(int argc, char* argv[]) {

    if (argc != 4) {
        cout << "Usage   : " << argv[0] << " <warn_threshold> <critical_threshold> <num_readings>\n";
        cout << "Error   : Missing arguments.\n";
        return 1;
    }

    int warn = stoi(argv[1]);
    int critical = stoi(argv[2]);
    int num_readings = stoi(argv[3]);


    if (warn >= critical) {
        cout << "Error: warn threshold must be less than critical threshold.\n";
        return 1;
    }
    if (num_readings < 1 || num_readings > 500) {
        cout << "Error: num_readings must be between 1 and 500.\n";
        return 1;
    }

    runSimulation(warn, critical, num_readings);

    return 0;
}

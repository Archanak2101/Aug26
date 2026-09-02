//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

void processSensorGrid(double building[3][3]) {
    double maxTemp = -9999.0;
    int hottestFloor = 0, hottestRoom = 0;

    double maxFloorAvg = -9999.0;
    int hottestFloorIndex = 0;

    int warningCount = 0;


    cout << "\n          Room1   Room2   Room3\n";


    for (int floor = 0; floor < 3; floor++) {
        cout << "Floor " << (floor + 1) << " : ";

        double currentFloorSum = 0.0;

        for (int room = 0; room < 3; room++) {
            cout << building[floor][room] << "    ";


            if (building[floor][room] > maxTemp) {
                maxTemp = building[floor][room];
                hottestFloor = floor;
                hottestRoom = room;
            }


            if (building[floor][room] >= 30.0) {
                warningCount++;
            }

            currentFloorSum += building[floor][room];
        }
        cout << "\n";


        double currentAvg = currentFloorSum / 3.0;
        if (currentAvg > maxFloorAvg) {
            maxFloorAvg = currentAvg;
            hottestFloorIndex = floor;
        }
    }


    cout << "\nHottest Room  : Floor " << (hottestFloor + 1) << ", Room " << (hottestRoom + 1) << " -> " << maxTemp << "C\n";
    cout << "Hottest Floor : Floor " << (hottestFloorIndex + 1) << "  (avg " << maxFloorAvg << "C)\n";
    cout << "Rooms at WARNING or above : " << warningCount << "\n";
}

int main() {
    double building[3][3];

    cout << "Enter temperature for 9 rooms (3 floors x 3 rooms):\n";

    for (int floor = 0; floor < 3; floor++) {
        for (int room = 0; room < 3; room++) {
            cout << "Floor " << (floor + 1) << ", Room " << (room + 1) << " : ";
            cin >> building[floor][room];
        }
    }


    processSensorGrid(building);

    return 0;
}

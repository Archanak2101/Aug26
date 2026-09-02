//============================================================================
// Name        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;


inline double distanceBetween(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


inline double toRadians(double degrees) {
    return degrees * (M_PI / 180.0);
}


inline double clamp(double value, double minVal, double maxVal) {
    if (value < minVal) return minVal;
    if (value > maxVal) return maxVal;
    return value;
}


inline bool isInSafeZone(double x, double y, double cx, double cy, double radius) {
    return distanceBetween(x, y, cx, cy) <= radius;
}

int main() {
    double homeX = 0.0;
    double homeY = 0.0;
    double safeRadius = 50.0;


    double waypoints[3][2] = {
        {30.0, 40.0},
        {60.0, 20.0},
        {-15.0, 25.0}
    };

    cout << "--- Drone Navigation System ---\n";
    cout << "Home: (0, 0) | Safe Zone Radius: 50.0\n\n";

    for (int i = 0; i < 3; i++) {
        double wx = waypoints[i][0];
        double wy = waypoints[i][1];

        double dist = distanceBetween(wx, wy, homeX, homeY);
        bool isSafe = isInSafeZone(wx, wy, homeX, homeY, safeRadius);

        cout << "Waypoint " << (i + 1) << " (" << wx << ", " << wy << "):\n";
        cout << "  Distance from Home : " << dist << "\n";
        cout << "  Status             : " << (isSafe ? "Inside Safe Zone" : "OUTSIDE Safe Zone!") << "\n\n";
    }

    return 0;
}

#include <iostream>
#include <memory> // For smart pointers

using namespace std;

class Satellite {
private:
    long longitude;
    long latitude;
    long altitude;
    int heatLevel;

public:
    Satellite(long longitude, long latitude, long altitude)
        : longitude(longitude), latitude(latitude), altitude(altitude), heatLevel(0) {}

    // Getters
    long getLongitude() const { return longitude; }
    long getLatitude() const { return latitude; }
    long getAltitude() const { return altitude; }
    int getHeatLevel() const { return heatLevel; }

    // Setter for heat level
    void setHeatLevel(int newHeatLevel) {
        heatLevel = newHeatLevel;
    }
};

class FireScanner {
public:
    void scanLocationForFire(const Satellite& satellite) const {
        if (satellite.getHeatLevel() >= 100) {
            cout << "Fire detected at: " << satellite.getLongitude() << " " 
                 << satellite.getLatitude() << " " << satellite.getAltitude() << endl;
            cout << "The Heat level is: " << satellite.getHeatLevel() << endl;
        }
    }
};

class Drone {
private:
    FireScanner fireScanner;
    long longitude;
    long latitude;
    long altitude;

public:
    Drone(long longitude, long latitude, long altitude)
        : longitude(longitude), latitude(latitude), altitude(altitude) {}

    void scanLocationForFire(const Satellite& satellite) const {
        fireScanner.scanLocationForFire(satellite);
    }
};

int main() {
    // Create a Satellite object
    Satellite satellite(12345, 67890, 10000);

    // Create a Drone object
    Drone drone(54321, 98765, 5000);

    // Set the heat level of the satellite
    satellite.setHeatLevel(150);

    // Scan the location for fire using the drone
    drone.scanLocationForFire(satellite);

    return 0;
}

// GROUP MEMBER ID's:
// 1115 2020 00032
// 1115 2020 00083
// 1115 2020 00084
// 1115 2022 00151


#include <iostream>

using namespace std;

class Satellite
{
    private:
        long Longtitude;
        long Latitude;
        long Altitude;
        int HeatLevel;

    public:
        // CONSTRUCTOR
        Satellite(long Longtitude, long Latitude, long Altitude)
        {
            this->Longtitude = Longtitude;
            this->Latitude = Latitude;
            this->Altitude = Altitude;
        }

        // SETTERS

        void setLongtitude(long Longtitude)
        {
            this->Longtitude = Longtitude;
        }

        void setLatitude(long Latitude)
        {
            this->Latitude = Latitude;
        }

        void setAltitude(long Altitude)
        {
            this->Altitude = Altitude;
        }

        void setHeatLevel(int HeatLevel)
        {
            this->HeatLevel = HeatLevel;
        }

        // GETTERS

        long getLongtitude(void)
        {
            return this->Longtitude;
        }

        long getLatitude(void)
        {
            return this->Latitude;
        }

        long getAltitude(void)
        {
            return this->Altitude;
        }

        int getHeatLevel(void)
        {
            return this->HeatLevel;
        }
};

class FireScanner
{
    public:
        void ScanLocationForFire(Satellite *S)
        {
            if(S->getHeatLevel() >= 100)
            {
                cout << "Fire detected at: " << S->getLongtitude() << " " << S->getLatitude() << " " << S->getAltitude() << endl;
                cout << "The Heat level is: " << S->getHeatLevel() << endl;
            }

            return;
        }
};

class Drone
{
    private:
        FireScanner FS;
        long Longtitude;
        long Latitude;
        long Altitude;

    public:
        // CONSTRUCTOR
        Drone(long Longtitude, long Latitude, long Altitude)
        {
            this->Longtitude = Longtitude;
            this->Latitude = Latitude;
            this->Altitude = Altitude;
        }

        void ScanLocationForFire(Satellite *S)
        {
            FS.ScanLocationForFire(S);
        }

};


int main(void)
{
    // Create a Satellite object
    Satellite satellite(12345, 67890, 10000);

    // Create a Drone object
    Drone drone(54321, 98765, 5000);

    // Set the heat level of the satellite
    satellite.setHeatLevel(150);

    // Scan the location for fire using the drone
    drone.ScanLocationForFire(&satellite);

    return 0;
}
// #sdi1800152 #sdi2100171
#include <iostream>

using namespace std;

class Satellite {
private:
    int sat_id;
public:
    int get_sat_id() {
        return sat_id;
    }
};

class FileScanner {
private:
    int fc1;
public:
    int get_geo_location_data(Satellite sat) {
        return sat.get_sat_id();
    }
};

class Drone {
private:
    int drone_id;
public:
    FileScanner fcs;
};

int main() {
    return 0;
}
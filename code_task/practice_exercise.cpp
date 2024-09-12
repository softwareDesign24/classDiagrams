#include "stdio.h"

/* ids: 1115202100069
        1115201800069
        1115202000072
*/

class Drone;
class FireScanner;
class Satelite;

struct cordinates{
    float x_axis;
    float y_axis;
};

class Drone {
    private:
        FireScanner fireScanner;
};

class FireScanner {
    public:
    cordinates get_geolocation (Satelite s) {
        return s.give_cordinates();
    }
};

class Satelite {
    private:
        cordinates my_cordinates;
    public:
        cordinates give_cordinates() {
            return my_cordinates;
        }
};

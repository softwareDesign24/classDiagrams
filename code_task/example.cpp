#include <iostream>
class Satelite{
    char *name;
    public:
    int coordinates;
};
class FireScanner{
    private:
    bool fire_identified; 
    public:
    int get_coordinates(Satelite sat){
        return sat.coordinates;
    }
};
class Drone{
    private: 
    int range;
    int altitude;
    FireScanner scan;
};

int main(){
    return 1;
}




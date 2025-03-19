#include <iostream>
#include <vector>

using namespace std;


class Satellite{
    private: 
        double x;
        double y;
        double z;

    public: Satellite(){
            x = 27.42412;
            y = 22.4234;
            z = 1000;
        }

    public: vector<double> getSatellite(){
        vector<double> geoLoc = {x,y,z};
        return geoLoc;

    }

};


class FireScanner{
    

    public: 
    bool scan(Satellite sat1){

        vector<double> location = sat1.getSatellite();
       
        for (double coordinates : location) {
            cout << coordinates << "\n";
          }
    }

};



class Drone{
    private:
        // private attributes

    
    public:
        FireScanner scan1;

};

int main(void){
    Drone drone;
    Satellite sat;

    drone.scan1.scan(sat);


}



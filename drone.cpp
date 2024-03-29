#include <iostream>
using namespace std;

struct GeoLocation {
    int x, y; 
};
typedef struct GeoLocation GeoLocation;

class Drone{
    private:
        FireScanner fs;
    public:
        Drone(FireScanner fs);
};

class Satellite{
    private:
        GeoLocation loc;
    public:
        GeoLocation getLoc();

};

class FireScanner{
    public:
        FireScanner(string type = "A");
        GeoLocation getLoc(Satellite s);
        bool getDanger();
        string getType();
        void setter(bool d, string t);
    private:
        bool danger;
        string type;
};



int main() {
    FireScanner f("A");
    cout << f.getType() << endl;
    return 0;
}

GeoLocation Satellite::getLoc() {
    return loc;
}

GeoLocation FireScanner::getLoc(Satellite s) {
    return s.getLoc();
}

FireScanner::FireScanner(string s) {
    type = s;
    danger = false;
}

string FireScanner::getType() {
    return type;
}

bool FireScanner::getDanger() {
    return danger;
}

void FireScanner::setter(bool d, string t) {
    danger = d;
    type = t;
}

Drone::Drone(FireScanner fs){
    
    this->fs.setter(fs.getDanger(),fs.getType());
    cout << "Drone created" << endl;
}
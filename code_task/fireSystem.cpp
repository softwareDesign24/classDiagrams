/* 1700274
   2000136
   2000237
*/


class Drone {
  FireScanner f1;
};

class FireScanner {
private:
  int fireLocation;
public:
  void setFireData(Satellite S1) {
  fireLocation = S1.getGLData(); 
  }
};

class Satellite {
public:
  int getGLData() { return geoLocationData;};
private:
  int geoLocationData;
};

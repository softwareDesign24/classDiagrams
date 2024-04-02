#include <iostream>
#include <String>



class Satelite{
    private:
        String longtitude, latitude;
    public:
        Satelite(String longtitude,latitude){
            this.longtitude = longtitude;
            this.latitude = latitude;
        }
        String getLongtitude(){
            return longtitude;
        }
        
        String getLatitude(){
            return latitude;
        }

        void setLongtitude(String longtitude){
            this.longtitude = longtitude;
            return;
        }

        void setLatitude(String latitude){
            this.latitude = latitude;
            return;
        }
};


class fireScanner{
    private:
        bool Alarmed;
        String longtitude, latitude;
    public:
        void checkForFire(Satelite s1){
            if (Alarmed){
                longtitude = s1.getLongtitude();
                latitude = s1.getLatitude();
            }
            return;
        }
        
        String getLongtitude(){
            return longtitude;
        }
        
        String getLatitude(){
            return latitude;
        }

        bool getAlarm(){
            return Alarmed;
        }
};


class Drone{
    private:
        fireScanner f1;
        String longtitude, latitude;
    public:
        void move(){ //Αλλάζει το location του drone προς την φωτια.
            
        }


};
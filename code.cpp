#include <iostream>

using namespace std;

class Car
{
string brand;
int speed;
public:
   void setCarDetails(string b,int s){
    brand = b;
    speed = s;
   }

void displayCar(){
    cout<< "Car Brand:"<<brand<<", speed:"<<speed<< "km/h"<<endl;
}
};
int main(){
    Car myCar;
    myCar.setCarDetails("toyota",120);
    myCar.displayCar();
    return 0;
}


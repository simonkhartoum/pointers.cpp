#include <iostream>

using namespace std;

//class defination
class Car 
{
    //Data members
string brand;
int speed;
public:
// member functions(methods)
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


#include<iostream>
using namespace std;
class A{
    public:
    void display(){cout<<"Base Class A"<<endl;}
};
class B: public A{
    
};
int main()
{
   B object;
   object.display();

    return 0;
}
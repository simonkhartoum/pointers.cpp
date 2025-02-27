#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int salary;
public:
//setter function
void setEmployee(string n, int s){
    name = n;
    salary = s;
}
//getter funtion
void displayEmployee(){
    cout<<"Employee Name:"<< name <<", salary:"<<salary<<endl;
}
   
};

int main(){
    Employee Dan;
    Dan.setEmployee("Duncan",5555);
    Dan.displayEmployee();

    return 0;
}



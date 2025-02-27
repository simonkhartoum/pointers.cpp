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

int main() {
    Employee emp1, emp2;  // Creating objects of Employee class

    emp1.setEmployee("Alice", 50000);
    emp2.setEmployee("Bob", 60000);

    emp1.displayEmployee();
    emp2.displayEmployee();

    return 0;
}




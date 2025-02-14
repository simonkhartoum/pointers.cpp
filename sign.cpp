#include<iostream>

using namespace std;

int main() {
    int a=20, b= 25;
    cout << (a > b ? "25 is greater than 20":"20 is less than 25") << endl;
  return 0;
}

#include <iostream>

using namespace std;

int main() {
    string days[] = {"Sunday","monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", };
    for (int i = 0; i < 7; i++) {
         if (i == 1) {             
            continue;         
         } 
        cout << days[i] << endl;
    }
    return 0;
}
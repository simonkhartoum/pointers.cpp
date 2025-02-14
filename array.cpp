// #include<iostream>

// using namespace std;

// int main() {
//   int numbers[5] = {10,20,30,40,50};
//   cout << "Array elements:";
//   for (int i = 0; i < 5; i++)
//   {
//     cout<< numbers[i]<<"";
//   }
//   return 0;
// }
//TWO DIMENSION

#include<iostream>

using namespace std;
int main(){
    int matrix[2][3]={{1,2,3},{4,5,6}};
    cout << "Matrix Elements:"<< endl;
    for (int i = 0;i<2;i++){
        for (int j = 0;j<3;j++){
            cout<<matrix[i][j]<<"";
        }
        cout<< endl;
    }
    return 0;
}

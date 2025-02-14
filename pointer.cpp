// #include<iostream>
// using namespace std;
// int main()
// {
//     int num =10;
//     int *ptr=&num;
//     cout<<"value of num:"<< num<< endl;
//     cout<<"address of num:"<< &num<< endl;
//     cout<<"Dereferencing ptr(*ptr):"<< *ptr<< endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] ={10,20,30,40,40};

//     int *ptr=arr;

//     cout<<"first element:"<<*ptr<< endl;
//     cout<<"second element:"<< *(ptr +1)<< endl; //moves to next element
//     cout<<"third element:"<< *(ptr+2)<< endl;

//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[5] ={5,10,15,20,25};

    int *ptr=arr;

    cout<<"Array elements using pointers:";
    for (int i = 0; i < 5; i++)
    {
         cout<<*(ptr+i)<<" ";
    }
    return 0;
}
//write a C++ program that checks whether a given integer is odd or even.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number you ant to check to be odd or even: "<<endl;
    cin>>a;
    if(a%2==0)
        cout<<"The number is even: "<<a<<endl;
        else
            cout<<"The number is odd: "<<a<<endl;
    return 0;
}

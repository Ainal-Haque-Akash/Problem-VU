//write a C++ program that calculate the factorial of a given number using a loop.
#include<iostream>
using namespace std;
int main()
{
    int number,factorial=1;
    cout<<"Enter the number you want: "<<endl;
    cin>>number;
    if(number < 0)
       cout<<"can not find the factorial for negative number";
    else if(number <=1 )
        cout<<number<<"! = "<<factorial;
        else
        {
            for(int counter= number;counter>=2;counter--)
            {
               factorial= factorial*counter;
            }
            cout<<number<<"! = "<<factorial;
        }

}

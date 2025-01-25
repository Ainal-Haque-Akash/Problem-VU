/*write a C++ program that preforms basic arithmetic operations (addition, subtraction, multiplication, division)
on two numbers provided by the user. the user should be able to choose the operation.*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Choose an arithmetic operation: "<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.division"<<endl;
    cout<<"what is your choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"the addition is: "<<a+b<<endl;
        break;
    case 2:
        cout<<"the subtraction is: "<<a-b<<endl;
        break;
    case 3:
        cout<<"the multiplication is: "<<a*b<<endl;
        break;
    case 4:
        if(b!=0)
        {
            cout<<"the division: "<<a/b<<endl;
        }
        else
        {
            cout<<"division by zero is not possible"<<endl;
        }
        break;
    default:
        cout<<"please choose from the given operation"<<endl;
    }
    return 0;
}

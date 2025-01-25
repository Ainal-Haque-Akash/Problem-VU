//write a C++ program to generate the first n numbers of the fibonacci sequence, there n is provided by the user.
#include<iostream>
using namespace std;
int main()
{
    int number,first=0,second=1,next;
    cout<<"Enter the number you want the fibonacci sequence for: "<<endl;
    cin>>number;
    cout<<"fibonaccci sequence"<<endl;
    for(int i=0; i<number; i++)
    {
        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}

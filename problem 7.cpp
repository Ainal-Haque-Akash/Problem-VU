//write a C++ program that checks whether a given number is prime.
#include<iostream>
using namespace std;
int main()
{
   int i,n,m=0,flag=0;
   cout<<"Enter the number to check prime or not: ";
   cin>>n;
   m=n/2;
   for(i=2;i<=m;i++)
   {
    if(n%2==0)
    {
        cout<<"the number is not prime"<<endl;
        flag=1;
        break;
    }
   }
   if(flag==0)
   cout<<"number is prime";

    return 0;
}

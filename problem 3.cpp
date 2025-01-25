//write a C++ program to find the largest of three numbers provided by the user.
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter the numbers you want to use"<<endl;
  cin>>a>>b>>c;
  if(a>=b && a>=c)
    cout<<"The larger number is a: "<<a<<endl;
  else if(b>=a && b>=c)
    cout<<"The larger number is b: "<<b<<endl;
  else if(c>=a && c>=b)
    cout<<"The larger number is c: "<<c;
  return 0;
}

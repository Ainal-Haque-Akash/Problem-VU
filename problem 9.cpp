//write a C++ program that includes a function to calculate the area of a circle. the function should take the radius as a parameter and return the area.
#include<iostream>
using namespace std;
const double pi =3.1416;
double circleArea(double radius)
{
    double value=pi*radius*radius;
    return value;
}
int main()
{
    double r,area;
    cout<<"enter the radius of a circle: ";
    cin>>r;
    area=circleArea(r);
    cout<<"the radius of the circle is: "<<area;
    return 0;
}
